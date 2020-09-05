#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node
* @head: Doubly linked lists head
* @index: Index node
*
* Description: Returns the nth node of a dlistint_t linked list
* Return: the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *last;

	while (head != NULL)
	{
		last = head;
		if (x == index)
			return (last);
		head = head->next;
		x++;
	}
	return (NULL);
}
