#include "holberton.h"
/**
 * binary_to_uint - convert binary
 * @b: pointing to a string
 * Description: convert binary to unsigned
 * Return: The convert number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	while (b && *b)
	{
		if (*b == '0' || *b == '1')
			dec = ((dec << 1) | (*b++ - '0'));
		else
			return (0);
	}

	return (dec);
}
