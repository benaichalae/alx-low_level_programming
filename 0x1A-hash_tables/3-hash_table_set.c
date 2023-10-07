#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to set in the hash table.
 * @value: Value to save in the hash table.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || !ht || !ht->array)
		return (0);
	
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
				return (0);
			return (1);
		}
		node = node->next;
	}
	
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	
	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	
	node->next = ht->array[index];
	ht->array[index] = node;
	
	return (1);
}
