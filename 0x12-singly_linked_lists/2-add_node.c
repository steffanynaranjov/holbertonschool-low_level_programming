#include "lists.h"
/**
 * add_node - add a new node
 * @head: noe head
 * @str: string
 * Description: Add a new node at the head
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	char *d = NULL;

	if (!(*head))
	{
		(*head) = malloc(sizeof(list_t));

		if ((*head))
		{
			(*head)->str = strdup(str);
			for ((*head)->len = 0; *str; (*head)->len++)
				str++;
		}
		return ((*head));
	}

	new = malloc(sizeof(list_t));
	d = strdup(str);
	if (!new || !d)
		return (NULL);

	for (new->len = 0; *str; new->len++)
		str++;
	new->next = (*head);
	(*head) = new;
	new->str = d;

	return (new);
}
