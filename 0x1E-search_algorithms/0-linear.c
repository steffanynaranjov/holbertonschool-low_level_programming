#include "search_algos.h"
/**
 * linear_search - Search for a val in an array
 * @array: a pintr
 * @size: size_t
 * @value: an int
 *
 * Return: value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int x = 0;

	if (!array)
		return (-1);
	while (x < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}
	return (-1);
}
