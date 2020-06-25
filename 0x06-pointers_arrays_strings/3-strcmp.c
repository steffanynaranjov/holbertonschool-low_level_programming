#include "holberton.h"
/**
* _strcmp - Compares two strings
* @s1: First
* @s2: Second
*
* Description: Compares two strings
* Return: dest
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
return (0);
s1++;
s2++;
}
return (*s1 - *s2);
}
