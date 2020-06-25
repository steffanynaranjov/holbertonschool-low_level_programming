#include "holberton.h"
/**
* cap_string - Capitalizes all words of a string
* @s: First input pointer
*
* Description: Capitalizes all words of a string
* Return: char
*/
char *cap_string(char *s)
{
char *t = s;
int i = 0;

while (s[i] != 0)
{
if (i == 0 && s[i] > 90)
s[i] = s[i] - 32;

if (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == 46)
if (s[i + 1] > 90)
s[i + 1] = s[i + 1] - 32;

i++;
}

return (t);
}
