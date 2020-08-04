#include "holberton.h"
/**
 * read_textfile - Reads the text file
 * @filename: the file
 * @letters: Number of letters
 * Description: reads a text file and prints it to the POSIX.
 * Return: Number of letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = 0, r = 0, w = 0;
	char *buffer = NULL;

	if (filename)
	{
		buffer = malloc(sizeof(char) * letters);
		fp = open(filename, O_RDONLY);

		if (buffer && fp != -1)
		{
			r = read(fp, buffer, letters);
			w = write(STDOUT_FILENO, buffer, r);
		}

		close(fp);
		free(buffer);
	}

	return (w);
}
