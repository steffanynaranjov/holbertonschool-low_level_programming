#include "holberton.h"
/**
 * print_error - Prin the error.
 * @file_from: file descriptor.
 * @file_to: file descriptor
 * @argv: arguments of the vector.
 * Return: 0.
 */
void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy a file
 * @argc: input int argument
 * @argv: char argument of string
 * Description: Copy a file
 * Return: -1 or 0
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, r;
	ssize_t n, w;
	char buffer[SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(fd_from, fd_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(fd_from, buffer, SIZE);
		if (n == -1)
			print_error(-1, 0, argv);
		w = write(fd_to, buffer, n);
		if (w == -1)
			print_error(0, -1, argv);
	}

	r = close(fd_from);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	r = close(fd_to);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
