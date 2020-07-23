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
	int x = 0;

	while (h != NULL)
	{
		printf("[%d], %s\n", h->len, h->str ? h->str : "(nil)");
		x++;

		h = h->next;
	}
	return (x);
}
