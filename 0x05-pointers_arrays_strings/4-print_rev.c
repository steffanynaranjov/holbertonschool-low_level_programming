#include "holberton.h"
/**
* print_rev - Prints a string, in reverse
* @s: The evaluated input
*
* Description: Prints a string, in reverse
* Return: n value
*/
void print_rev(char *s)
{
int x = 0;
for (; s[x] != '\0';)
x++;
--x;
for (; x >= 0;)
_putchar(s[x--]);

_putchar('\n');
}
