#include "holberton.h"
/**
* _strspn - Gets the length of a prefix substring
* @s: First input pointer origin
* @accept: Second input char
*
* Description: Gets the length of a prefix substring
* Return: char
*/
unsigned int _strspn(char *s, char *accept)
{
int x, y;

for (x = 0; s[x]; x++)
{
for (y = 0; accept[y]; y++)
{
if (s[x] == accept[y])
break;
}

if (!accept[y])
break;
}

return (x);
}
