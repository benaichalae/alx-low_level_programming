#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL on failure
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list;
	skiplist_t *jump;

	if (list == NULL)
		return (NULL);

	while (node->express != NULL && node->n < value)
	{
		jump = node->express;
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		if (jump->n >= value || jump->express == NULL)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					node->index, jump->index);
			break;
		}
		node = jump;
	}

	while (node->index < jump->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
