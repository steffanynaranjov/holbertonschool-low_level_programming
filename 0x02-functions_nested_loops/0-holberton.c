#include "holberton.h"
/**
* main - Print string with _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *s = "Holberton";
while (*s) 
_putchar(*(s++));
_putchar('\n');
return (0);
}
