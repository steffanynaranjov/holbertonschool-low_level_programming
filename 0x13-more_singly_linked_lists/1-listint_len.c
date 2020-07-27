#include "lists.h"
/**
 * struct listint_s - singly linked list
 * @h: integer
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
		h = h->next, x++;
	return (x);

}
