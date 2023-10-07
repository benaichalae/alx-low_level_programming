#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: Pointer to the key.
 * @size: Size of the hash table.
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
