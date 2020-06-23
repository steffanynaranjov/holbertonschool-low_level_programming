#include "holberton.h"
#include <stdio.h>
/**
* print_array - Prints n elements of an array of integers
* @a: The evaluated input
* @n: The print lentght input
*
* Description: Prints n elements of an array of integers
* Return: n
*/
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
printf("%d%s", a[x], x < n - 1 ? ", " : "");

printf("\n");
}
