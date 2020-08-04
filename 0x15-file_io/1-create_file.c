#include "holberton.h"
/**
 * create_file - Creat a file
 * @filename: the file
 * @text_content: string in the file
 * Description: Function that creat a file
 * Return: -1 or filename
 */
int create_file(const char *filename, char *text_content)
{
	int fp = 0, w = -1;

	if (filename)
	{
		fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		for (w = 0; text_content && text_content[w]; w++)
			;

		if (!text_content)
			text_content = "";

		if (fp != -1)
		{
			w = write(fp, text_content, w);
			close(fp);
		}
		else
			w = -1;
	}

	return (w != -1 ? 1 : w);
}
