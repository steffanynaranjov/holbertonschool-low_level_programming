#include "holberton.h"
#include <stdio.h>
/**
* print_buffer - Adds two numbers
* @b: First input pointer
* @size: Buffer size
*
* Description: Adds two numbers
* Return: char
*/
void print_buffer(char *b, int size)
{
int x = 0, y;

if (size > 0)
{
while (x < size)
{
printf("%08x: ", x);
y = 0;
while (y < 10)
{
if (y % 2 == 0 && y)
printf(" ");
if ((y + x) > size - 1)
printf("  ");
else
printf("%.2x", b[x + y]);
y++;
}
printf(" ");
y = 0;
while (y < 10)
{
if ((y + x) > size - 1)
break;
if (b[y + x] <= 31 || b[y + 1] >= 126)
b[y + x] = 46;
putchar(b[y + x]);
y++;
}
printf("\n");
x += 10;
}
}
else
printf("\n");
}
