#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer head
 *
 * Description: frees a linked list
 * Return: number of elements
 */
void free_list(list_t *head)
{
	list_t *t = NULL;

	t = head;

	while (t)
	{
		free(t->str)
			free(t);
		t = t->next;
	}
	free(t);
}
