#include "holberton.h"
#include <stdio.h>
/**
* _strchr - Locates a character in a string
* @s: First input pointer
* @c: second input
*
* Description: Locates a character in a string
* Return: char or null
*/
char *_strchr(char *s, char c)
{
while (*s != 0)
{
if (*s == c)
break;
s++;
}
return ((*s == c) ? s : NULL);
}
