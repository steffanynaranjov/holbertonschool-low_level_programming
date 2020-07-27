#include "lists.h"
/**
 * free_listint - add new node
 * @head: node head
 * Description: Add a new node
 * return: 0
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}

}
