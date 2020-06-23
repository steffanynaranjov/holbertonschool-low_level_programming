#include "holberton.h"
/**
* rev_string - Reverses a string
* @s: The evaluated input
*
* Description: Reverses a string
* Return: n
*/
void rev_string(char *s)
{
int x = 0, y, z;
char w;

while (s[x] != '\0')
{
x++;
}
z = x - 1;
for (y = 0; z >= 0 && y < z; z--, y++)
{
w = s[y];
s[y] = s[z];
s[z] = w;
}
}
