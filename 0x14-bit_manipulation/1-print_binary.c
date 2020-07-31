#include "holberton.h"
/**
 * _print_binary_ - convert an integer to binary but not zero
 * @n: integer
 *
 * Return: nothing
 */
void _print_binary_(unsigned long int n)
{
	if (n)
	{
		_print_binary_(n >> 1);
		_putchar((n & 1) + '0');
	}
}
/**
 * print_binary - prints the binary
 * @n: integer
 * Description: prints the binary representation of a number.
 * Return: 1
 */
void print_binary(unsigned long int n)
{
	if (n)
		_print_binary_(n);
	else
		_putchar('0');
}
