#include "holberton.h"
/**
* print_sign - Determine the sign and the size of a integer
* _putchar - Prints characters one by one
* @n: The evaluated input
*
* Description: This determines the sign and if it is greater or less than cero
* Return: 0 Value if it works
*/
int print_sign(int n)
{
if (n > 0 || n < 0)
{
int r = n > 0 ? 1 : -1;

_putchar(r == 1 ? '+' : '-');
return (r);
}

_putchar('0');
return (0);
}
