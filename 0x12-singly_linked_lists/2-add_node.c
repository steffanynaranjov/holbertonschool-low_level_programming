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
	list_t *new;
	int x = 0;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
	}
	while (new->str[x])
		x++;
	new->len = x;
	new->next = *head;
	*head = new;

	return (new);
}
	return (NULL);
}
