#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -deletes the node at index of the linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ex = NULL;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (counter == index)
			break;
		ex = temp;
		temp = temp->next;
		counter++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);

	ex->next = temp->next;
	free(temp);

	return (1);
}
