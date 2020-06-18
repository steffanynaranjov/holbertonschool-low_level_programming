#include "holberton.h"
/**
* print_diagonal - Draws a diagonalt line
* _putchar - Prints characters
* @n: Parameter of times
*
* Description: Draws a diagonal line
* Return: 0 Value
*/
void print_diagonal(int n)
{
int y, z;

for (y = 0; y < n; y++)
{
for (z = 0; z < y; z++)
_putchar(' ');
_putchar(92);
_putchar(10);
}
if (n < 1)
_putchar(10);
}
