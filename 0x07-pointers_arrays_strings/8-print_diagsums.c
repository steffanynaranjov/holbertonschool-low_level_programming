#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - Prints the sum of the diagonals of matrix
* @a: First input origin
* @size: Second input siza
*
* Description: Prints the sum of the diagonals of matrix
*/
void print_diagsums(int *a, int size)
{
int x, dig1 = 0, dig2 = 0;
int mult = size * size;

for (x = 0; x < mult; x += size + 1)
dig1 += a[x];
for (x = size - 1; x < mult - 1 ; x += size - 1)
dig2 += a[x];
printf("%d, %d\n", dig1, dig2);
}
