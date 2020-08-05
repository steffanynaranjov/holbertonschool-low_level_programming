#include "holberton.h"
/**
 * main - Prototype
 * @ac: input int argument
 * @av: char argument of string
 * Description: Copy a file
 * Return: -1 or 1
 */
int main(int ac, char **av)
{
	int fd, fdw;
	char buffer[SIZE], *file_from, *file_to;
	ssize_t rd = 1024, wr;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!av[1])
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(97);
	file_from = av[1];
	file_to = av[2];
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdw = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	while (rd == SIZE)
	{
		rd = read(fd, buffer, SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		wr = write(fdw, buffer, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}
	if (close(fdw) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	return (0);
}
