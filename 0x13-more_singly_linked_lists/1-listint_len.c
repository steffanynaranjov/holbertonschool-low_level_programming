#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: integer
 *
 * Description: singly linked list node structure
 * Return: elementes of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
		h = h->next, x++;
	return (x);

}
