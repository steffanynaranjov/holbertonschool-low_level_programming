#include "holberton.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: void
*/
void print_alphabet_x10(void)
{
char x, y;
for (y = 1; y <= 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
