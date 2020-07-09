#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - Creates an array of integers
* @min: Firts input
* @max: Second input
*
* Description: function that creates an array of integers
* Return: String
*/
int *array_range(int min, int max)
{
int *string;
int x = 0, n = min, s;

if (min > max)
return (NULL);
s = max - min;
string = (int *) malloc(sizeof(int) * (s + 1));
if (string == 0)
return (NULL);
while (x <= s)
string[x++] = n++;
return (string);
}
