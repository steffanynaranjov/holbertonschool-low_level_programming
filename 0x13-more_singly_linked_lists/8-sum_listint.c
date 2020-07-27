#include "lists.h"
/**
 * add_nodeint - add new node
 * @head: node head
 * @n: integer
 * Description: Add a new node
 * return: New node
 */
int sum_listint(listint_t *head)
{
	unsigned int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return(add);
}
