#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Returns a pointer to a 2 dimensional array of integers
* @width: Firts input int
* @height: Secong input int
* Description: function that returns a pointer to a 2
* Return: null or a pointer
*/
int **alloc_grid(int width, int height)
{
int x = 0;
int y = 0;
int **s;

s = (int **) malloc(height * sizeof(int *));

if (width <= 0)
return (NULL);

if (height <= 0)
return (NULL);

if (s == NULL)
return (s);

for (x = 0; x < height; x++)
{

s[x] = (int *) malloc(width * sizeof(int));
if (s[x] == NULL)
{

while (x >= 0)
free(s[x--]);
free(s);
return (s);
}

}
for (; x < height; x++)

for (; y < width; y++)
s[x][y] = 0;
return (s);
}
