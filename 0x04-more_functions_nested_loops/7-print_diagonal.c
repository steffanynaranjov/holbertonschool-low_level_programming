#include "holberton.h"
/**
* print_diagonal - Draws a diagonalt line in the terminal
* _putchar - Prints characters one by one
* @n: Parameter of times
*
* Description: Draws a diagonal line
* Return: 0 Value
*/
void print_line(int n)
{
char x = '\';
int y;

for (y = 0; y <= n; y++)
{
if (y != 0)
_putchar(x);
}
_putchar('\n');
}
