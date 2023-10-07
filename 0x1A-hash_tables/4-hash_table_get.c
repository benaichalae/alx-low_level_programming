#include "hash_tables.h"

/**
 * hash_table_get - Get the value from a hash table
 * @ht: Hash table to search into.
 * @key: Key you are looking for.
 * Return: The value founded by key, NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
