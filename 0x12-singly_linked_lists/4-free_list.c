#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer head
 *
 * Description: frees a linked list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	tmp = head;

	while (tmp)
	{
		free(tmp->str);
			free(tmp);
		tmp = tmp->next;
	}
	free(tmp);
}
