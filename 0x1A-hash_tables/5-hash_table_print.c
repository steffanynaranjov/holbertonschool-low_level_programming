#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 *
 * Description: Function that prints a hash table
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long x = 0, flag = 0;
	hash_node_t *new_node;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		new_node = ht->array[x];
		while (new_node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", new_node->key, new_node->value);
			new_node = new_node->next, flag = 1;
		}
	}
	printf("}\n");
}
