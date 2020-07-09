#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: Firts input char pointer
 * @s2: Second input char pointer
 * @n: n bytes of s2
 *
 * Description: Concatenates two strings
 * Return: string concated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conc, *conct;
unsigned int x = 0, y = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (y = 0; s1[y]; y++)
x++;

for (y = 0; s2[y] && y < n; y++)
x++;

conc = malloc((y + 1) * sizeof(char));
conct = conc;

if (conc == NULL)
return (NULL);

while (*s1)
*conc++ = *s1++;

for (y = 0; s2[y] && y < n; y++)
*conc++ = s2[y];

*conc = '\0';

return (conct);
}
