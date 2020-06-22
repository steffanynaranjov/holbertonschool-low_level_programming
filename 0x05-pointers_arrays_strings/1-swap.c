#include "holberton.h"
/**
* swap_int - Swaps the values of two integers
* @a: First input
* @b: Sec input
*
* Description: Swaps the values of two integer
* Return: 0
*/
void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
