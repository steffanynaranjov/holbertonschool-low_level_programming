#include "holberton.h"
#include <stdio.h>
/**
* _strpbrk - Gets the length of a prefix substring
* @s: First input pointer
* @accept: Second input
*
* Description: Gets the length of a prefix substring
* Return: char or null
*/
char *_strpbrk(char *s, char *accept)
{
int x;

while (*s != 0)
{
x = 0;
while (accept[x] != 0)
{
if (*s == accept[x])
return (s);
x++;
}
s++;
}
return (NULL);
}
