#include "holberton.h"
/**
* reverse_array - Reverses the content of an array of integers
* @a: First input
* @n: Second
*
* Description: Reverses the content of an array of integers
* Return: dest
*/
void reverse_array(int *a, int n)
{
int x, y, reverse;

for (x = 0, y = n - 1; y > 0 && x < y; x++, y--)
{
reverse = a[x];
a[x] = a[y];
a[y] = reverse;
}
}
