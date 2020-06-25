#include "holberton.h"
/**
* _strncpy - Copies a string
* @dest: First
* @src: Segundo
* @n: Lenght
*
* Description: Copies a string
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest [x] = '\0';
x++;
}
return (dest);
}
