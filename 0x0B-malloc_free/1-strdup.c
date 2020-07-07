#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated
* @str: Firts input int argument
*
* Description: Returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a
* parameter.
* Return: null or a pointer
*/
char *_strdup(char *str)
{
int x = 0;
int y = 0;
char *s;

if (str == NULL)
return (NULL);

while (str[x])
x++;
x++;

s = (char *) malloc(x *sizeof(char));

if (s == NULL)
return (s);

for (; y < x; y++)
s[y] = str[y];

return (s);
}
