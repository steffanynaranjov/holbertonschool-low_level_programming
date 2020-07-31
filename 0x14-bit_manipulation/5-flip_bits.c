#include "holberton.h"
/**
 * flip_bits - number of bits
 * @n: integer
 * @m: unsigned integer
 * Description: number of bits you would need.
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	m = n ^ m;
	n = 0;

	while (m)
	{
		n += m & 1;
		m >>= 1;
	}

	return (n);
}
