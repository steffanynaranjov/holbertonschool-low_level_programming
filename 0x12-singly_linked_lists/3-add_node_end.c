#include "lists.h"
/**
 * add_node_end - at the end
 * @head: noe head
 * @str: string
 *
 * Description: adds a new node at the end
 * Return: number of elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *t = NULL;
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
	t = (*head);

	if (!new || !d)
		return (NULL);

	for (new->len = 0; *str; new->len++)
		str++;

	while (t->next)
		t = t->next;

	t->next = new;
	new->str = d;

	return (new);
}
