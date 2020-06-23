#include "holberton.h"
/**
* _puts - Returns the length of a string
* @str: The evaluated input
*
* Description: Returns the length of a string
* Return: n
*/
void _puts(char *str)
{
for (; *str;)
_putchar(*str++);

_putchar('\n');
}
