#include "holberton.h"
/**
* print_alphabet - Entry point
*
* Return: void
*/
void print_alphabet(void)
{
char *s = "abcdefghijklmnopqrstuvwxyz";
while (*s)
_putchar(*(s++));
_putchar('\n');
}
