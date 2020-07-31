#include "holberton.h"
/**
 * get_bit -  bit at a given index.
 * @n: integer
 * @index: index starting 0
 * Description: prints the binary representation of a number.
 * Return: -1 or index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	while (index--)
		n = (n >> 1);

	return (n & 1);
}
