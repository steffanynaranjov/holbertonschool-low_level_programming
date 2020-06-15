#include "holberton.h"
/**
* main - Print string with _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *s = "Holberton\n";
while (*s) putchar(*s++);
return (0);
}
