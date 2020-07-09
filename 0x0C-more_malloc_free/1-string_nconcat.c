#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - Concatenates two strings
* @s1: Firts input char pointer
* @s2: Second input char pointer
* @n: n bytes of s2
*
* Description: function that concatenates two strings
* Return: string concated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conc;
unsigned int x = 0, y = 0;

s1 = s1 ? s1 : "";
s2 = s2 ? s2 : "";

for (; s1[x] != '\0'; x++)
{
}
for (; s2[y] != '\0'; y++)
{
}
if (n > y)
n = y;

conc = malloc((x + n + 1) * sizeof(char));
if (conc == NULL)
return (NULL);

for (x = 0; s1[x] != '\0'; x++)
conc[x] = s1[x];

for (y = 0; y < n; y++, x++)
conc[x] = s2[y];
conc[x] = '\0';

return (conc);
}
