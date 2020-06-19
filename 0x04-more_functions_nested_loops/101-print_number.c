#include "holberton.h"
/**
* print_number - Print an integer
* @n: Parameter input
*
* Description: Print an integer
* Return: 0
*/
void print_number(int n)
{
unsigned int x;
if (n < 0)
{
_putchar ('-');
x = -n
}
else
{
x = n;
}
if (x / 10 != 0)
{
print_number(x / 10);
}
_putchar((x % 10) + '0');
}
