#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array
 * @array: a pointer
 * @size:  size_t
 * @value: an int
 *
 * Return: value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int x, l = 0, r = (int)size - 1;

	if (!array)
		return (-1);
	while (r >= l)
	{
		printf("Searching in array: ");
		for (x = l; x < r; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);
		x = l + (r - l) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			r = x - 1;
		else
			l = x + 1;
	}
	return (-1);
}
