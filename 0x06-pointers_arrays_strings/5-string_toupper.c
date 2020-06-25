#include "holberton.h"
/**
* string_toupper - Changes all lowercase letters of a string to uppercase
* @p: First input pointer
*
* Description: Changes all lowercase letters of a string to uppercase
* Return: char
*/
char *string_toupper(char *p)
{
int x = 0;

while (p[x] != '\0')
{
if (p[x] >= 97 && p[x] <= 122)
p[x] -= 32;
x++;
}
return (p);
}
