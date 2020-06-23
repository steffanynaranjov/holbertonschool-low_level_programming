#include "holberton.h"
/**
* puts_half - Prints half of a string
* @str: The evaluated input
*
* Description: Prints half of a string
* Return: n
*/
void puts_half(char *str)
{
int x = 0, lenght, z;

while (str[x] != '\0')
{
x++;
}
lenght = x + 1;
for (z = (lenght / 2); z < lenght; ++z)
{
if (str[z] != '\0')
_putchar(str[z]);
}
_putchar('\n');
}
