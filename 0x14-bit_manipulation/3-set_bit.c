#include "holberton.h"
/**
 * set_bit - sets the value of a int
 * @n: integer
 * @index: index starting 0
 * Description: prints the binary representation of a number.
 * Return: -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;
	int s = 1;

	x = (sizeof(n) * 8) -  1;
	if (index > x)
		return (-1);
	*n |= (s << index);
	return (1);
}
