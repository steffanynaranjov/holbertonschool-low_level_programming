#include "lists.h"
/**
 * add_dnodeint - Adds a new node
 * @head: Doubly linked lists
 * @n: Integer
 *
 * Description: Adds a new node at the beginning of a dlistint_t list
 * Return: The number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
