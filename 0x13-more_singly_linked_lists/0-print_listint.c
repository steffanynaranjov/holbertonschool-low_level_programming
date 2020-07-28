#include "lists.h"
/**
 * print_listint - print a list
 * @h: integer
 *
 * Description: singly linked list node structure
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);

		x++;
		h = h->next;
	}
	return (x);
}
