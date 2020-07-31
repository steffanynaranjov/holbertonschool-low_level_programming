#include "holberton.h"
/**
 * get_endianness - Check the endianness
 *
 * Description:  function that checks the endianness.
 * Return: -1 or 1
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	return (*c ? 1 : 0);
}
