#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the first elements in the linked list
 * @str: string that will be add the next node
 * Return: the address of the next element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *next;
	size_t n;

	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);

	next->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	next->len = n;
	next->next = *head;

	*head = next;

	return (next);
}
