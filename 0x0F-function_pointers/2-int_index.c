#include <stddef.h>
/**
* int_index - Searches for an integer
* @array: Array
* @size: Size of the array
* @cmp: Pointer
*
* Description: Function that searches for an integer.
* on each element of an array
* Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;

if (array && size > 0 && cmp)
{
for (; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
}
return (-1);
}
