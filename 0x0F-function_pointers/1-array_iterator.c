#include <stddef.h>
/**
* array_iterator - Executes on each element of an array
* @array: Array
* @size: Size of the array
* @action: Pointer
*
* Description: Executes a function given as a parameter
* Return: o
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x = 0;

if (array && action)
{
while (x < size)
{
action(array[x++]);
}
}
}
