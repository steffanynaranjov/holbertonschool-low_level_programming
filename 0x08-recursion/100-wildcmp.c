#include "holberton.h"
/**
* wildcmp -Fuction that compares two strings
* @s1: type char string.
* @s2: type char string.
* Return: 1 if the strings is identical or 0 if not.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == 0 && *s2 == 0)
return (1);
else if (*s1 == 0 && *(s2 + 1) != 0 && *s2 == '*')
return (0);
else if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
