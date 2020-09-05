#include "lists.h"
/**
* free_dlistint - free the double linked list
* @head: Doubly linked lists head
*
* Description: function that free a dlistint_t list.
* Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	last = head;
	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
	free(head);
}
