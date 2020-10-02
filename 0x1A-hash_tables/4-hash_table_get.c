#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key of the hash table
 *
 * Description: Function that retrieves
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int idx;

	if (!ht || !key || !*key)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[idx];
	while (new_node)
	{
		if (!strcmp(new_node->key, key))
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
