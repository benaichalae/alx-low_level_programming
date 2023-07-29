#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first elements in the linked list
 * Return: counter of the nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}
	return (counter);
}
