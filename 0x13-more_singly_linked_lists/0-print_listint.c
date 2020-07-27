#include "lists.h"
/**
 * struct listint_s - singly linked list
 * @h: integer
 *
 * Description: singly linked list node structure
 * for Holberton project
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
