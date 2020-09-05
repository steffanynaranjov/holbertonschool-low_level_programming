#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Doubly linked lists
 * @n: Number
 *
 * Description: Adds a new node at the end of a dlistint_t list
 * Return: The number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	last = *head;
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}
