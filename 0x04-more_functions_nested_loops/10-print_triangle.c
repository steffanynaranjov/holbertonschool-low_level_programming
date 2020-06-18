#include "holberton.h"
/**
* print_triangle - Draws a triangle line in the terminal
* _putchar - Prints characters one by one
* @size: Parameter of size
*
* Description: Draws a triangle
* Return: 0 Value
*/
void print_triangle(int size)
{
int y, z;

for (y = 0; y < size; y++)
{
for (z = size; z > 0; z--)
{
if (z > y + 1)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
if (size < 1)
{
_putchar('\n');
}
