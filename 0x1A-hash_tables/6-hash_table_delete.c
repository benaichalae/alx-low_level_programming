#include "hash_tables.h"

/**
 * free_list - Free a list.
 * @head: Pointer to the head of a linked list.
 * Return: Void.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_list(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}
