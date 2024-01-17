#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the Jump
 * search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *block_start = list;
	listint_t *block_end = list;
	listint_t *current;

	if (list == NULL || size == 0)
		return (NULL);

	while (block_end->next != NULL && block_end->n < value)
	{
		block_start = block_end;
		for (i = 0; i < step && block_end->next != NULL; ++i)
			block_end = block_end->next;
		printf("Value checked at index [%lu] = [%d]\n",
				block_end->index, block_end->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			block_start->index, block_end->index);
	current = block_start;
	while (current != NULL && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		current = current->next;
	}
	if (current != NULL && current->n == value)
		return (current);

	return (NULL);
}
