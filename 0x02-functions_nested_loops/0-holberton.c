#include "holberton.h"
/**
* main - Print string with _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *c = "Holberton";
while (*c) 
_putchar(*(c++));
_putchar('\n');
return (0);
}
