#include "lists.h"
/**
* print_dlistint - Prints all elements
* @h: Doubly linked lists
*
* Description: Prints all the elements of a dlistint_t list
* Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
