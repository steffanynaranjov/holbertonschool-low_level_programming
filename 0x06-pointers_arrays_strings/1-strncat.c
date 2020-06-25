#include "holberton.h"
/**
* _strncat - Concatenates two strings until n
* @dest: First
* @src: Segundo
* @n: Lenght
*
* Description: Concatenates two strings until n
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int x = 0, y = 0, l = 0;

while (dest[x] != '\0')
{
x++;
}
while (src[l] != '\0')
{
l++;
}
while (y < n && y < l)
{
dest[y] = src[y];
x++;
y++;
}
return (dest);
}
