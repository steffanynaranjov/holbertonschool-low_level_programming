#include "holberton.h"
/**
* rot13 - Encodes a string using rot13
* @s: First input pointer
*
* Description: Encodes a string using rot13
* Return: char
*/
char *rot13(char *s)
{
int x = 0, y;
char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (s[x] != '\0')
{
y = 0;
while (abc[y] != '\0')
{
if (s[x] == abc[y])
{
s[x] = rot13[y];
break;
}
y++;
}
x++;
}
return (s);
}
