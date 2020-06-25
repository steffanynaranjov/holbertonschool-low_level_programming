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
int x = 0, y = 0, lengt_src = 0;

while (dest[x] != '\0')
{
x++;
}
while (src [lengt_src] != '\0')
{
lengt_src++;
}
while (y < n && y < lengt_src)
{
dest[x] = src [y];
x++;
y++;
}
return (dest);
}
