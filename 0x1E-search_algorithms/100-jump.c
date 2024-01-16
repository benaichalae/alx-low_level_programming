#include "search_algos.h"


/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t next, i;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		next = prev + step;

		if (next >= size)
			next = size - 1;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (array[next] >= value)
			break;

		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

	for (i = prev; i <= prev + step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
