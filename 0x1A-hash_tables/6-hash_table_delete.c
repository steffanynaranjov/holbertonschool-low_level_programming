#include "hash_tables.h"
/**
 * hash_table_delete - Function deletes a hash table
 * @ht: Hash table
 *
 * Description: Function deletes a hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *new_node, *tmp;

	if (!ht)
		return;
	for (; x < ht->size; x++)
	{
		new_node = ht->array[x];
		while (new_node)
		{
			tmp = new_node->next;
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			new_node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
