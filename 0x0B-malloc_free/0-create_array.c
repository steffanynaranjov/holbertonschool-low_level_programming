#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Creates an array of chars, initializes with specific char
* @size: Firts input int
* @c: Second input char
*
* Description: function that creates an array of chars
* Return: Null if is o or a pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int x = 0;
char *s;

if (size == 0)
return (NULL);

s = (char *) malloc(size * sizeof(char));

if (s == NULL)
return (NULL);

for (; x < size; x++)
s[x] = c;

return (s);
}
