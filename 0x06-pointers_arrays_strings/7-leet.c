#include "holberton.h"
/**
* leet - Encodes a string into 1337g
* @s: First input pointer
*
* Description: Encodes a string into 1337
* Return: char
*/
char *leet(char *s)
{
int x = 0, y;
char let[11] = "AEOTLaeotl";
char num[11] = "4307143071";

while (s[x] != '\0')
{
y = 0;
while (y < 10)
{
if (s[x] == let[y])
s[x] = num[y];
y++;
}
x++;
}
return (s);
}
