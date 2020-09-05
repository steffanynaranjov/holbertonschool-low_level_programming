#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes a node
* @head: Doubly linked lists head
* @index: Index of the list
*
* Description: Deletes the node at index index of a dlistint_t
*
* Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (last == NULL)
			return (-1);
		last = last->next;
		index--;
	}
	if (last == *head)
	{
		*head = last->next;
		(*head)->prev = NULL;
	}
	else
	{
		last->prev->next = last->next;
		if (last->next)
			last->next->prev = last->prev;
	}
	free(last);
	return (1);
}
