#include "holberton.h"
/**
 * print_error - print error and exit with specific error number
 * @msg: message of the error
 * @file: file name
 * @error: error number
 *
 * Return: void
 */
void print_error(char *msg, char *file, int error)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(error);
}
/**
 * file_validation - validate open of the files
 * @argv: files name
 * @fd_from: file descriptor
 * @fd_to: file descriptor
 *
 * Return: Always 1 (Success)
 */
int file_validation(char **argv, int *fd_from, int *fd_to)
{
	*fd_from = open(argv[0], O_RDONLY);

	if (*fd_from == -1)
		print_error("Error: Can't read from file %s\n", argv[0], 98);

	*fd_to = open(argv[1], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);

	if (*fd_to == -1)
		print_error("Error: Can't write to %s\n", argv[1], 99);

	return (1);
}

/**
 * main - Print the name
 * @argc: input int argument
 * @argv: char argument of string
 * Description: Copy a file
 * Return: -1 or 0
 */
int main(int argc, char **argv)
{
	int fd_from = 0, fd_to = 0, r = 1024;
	char buf[SIZE] = {0};

	if (argc == 3 && file_validation(&argv[1], &fd_from, &fd_to))
	{
		while (r == SIZE)
		{
			r = read(fd_from, buf, SIZE);

			if (r == -1)
				print_error("Error: Can't read from file %s\n",
				argv[0], 98);

			if (write(fd_to, buf, r) == -1)
				print_error("Error: Can't write to %s\n",
				argv[1], 99);
		}
		if (close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd_to);
			exit(100);
		}
	}
	else
		print_error("Usage: cp file_from file_to\n", "", 97);


	return (0);
}
