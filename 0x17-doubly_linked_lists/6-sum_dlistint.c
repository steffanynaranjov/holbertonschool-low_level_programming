#include "lists.h"
/**
* sum_dlistint - Retuns the sum
* @head: Doubly linked lists head
*
* Description: returns the sum of all the data (n) of a
* dlistint_t linked list
* Return: the add
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
