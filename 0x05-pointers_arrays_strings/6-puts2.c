#include "holberton.h"
/**
* puts2 - Prints every other character of a string
* @str: The evaluated input
*
* Description: Prints every other character of a string
* Return: n
*/
void puts2(char *str)
{
int x = 0;

for (; str[x]; x++)
if (x % 2 == 0)
_putchar(str[x]);

_putchar('\n');
}
