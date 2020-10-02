#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: Key of the hash table
 * @value: Value associated with the key
 *
 * Description: Function that adds an element to the hash table
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, x;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !*key || *key == 48 || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; ++x)
	{
		if (!strcmp(ht->array[x]->key, key))
		{
			free(ht->array[x]->value);
			ht->array[x]->value = strdup(value);
			if (!ht->array[x]->value)
				return (0);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
