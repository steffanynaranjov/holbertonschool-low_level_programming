#include "holberton.h"
/**
* _strcpy - Copies the string pointed to by src
* @dest: Destination
* @src: Source
*
* Description: Copies the string pointed to by src
* Return: n
*/

char *_strcpy(char *dest, char *src)
{
int x = 0;

for (; src[x] != 0; x++)
{
dest[x] = src[x];
}

dest[x] = 0;
return (dest);
}
