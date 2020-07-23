#include "lists.h"
/**
 * print_list- singly linked list
 * @h: elements on linked list
 *
 * Description: Prints all elements of a list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d], %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		x++;
		h = h->next;
	}
	return (x);
}
