#include "holberton.h"
/**
* main - Print string with _putchar
* _putchar - Print characters one by one
* @void: Description of a empty parameter
*
* Return: Always 0
*/
int main(void)
{
char *c = "Holberton";

while (*c)
_putchar(*(c++));

_putchar('\n');
return (0);
}
