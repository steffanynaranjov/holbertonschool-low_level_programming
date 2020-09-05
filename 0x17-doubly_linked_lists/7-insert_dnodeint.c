#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Doubly linked lists head
 * @idx: Index of the list where the new node should be added
 * @n: Number
 *
 * Description: Inserts a new node at a given position
 * Return: Index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *last;

	last = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		last = last->next;
		if (last == NULL)
			return (NULL);
		idx--;
	}
	if (last->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = last;
	new_node->next = last->next;
	last->next->prev = new_node;
	last->next = new_node;
	return (new_node);
}
