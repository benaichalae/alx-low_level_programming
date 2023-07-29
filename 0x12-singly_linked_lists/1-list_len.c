#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: pointer to the first elements in the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != 0)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

