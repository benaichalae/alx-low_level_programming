#include "hash_tables.h"

/**
 * hash_table_print - Print all the hash table
 * @ht: Pointer to the hash table
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_pair = 1;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_pair = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
