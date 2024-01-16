#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 * advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - Recursive binary search implementation
 * @array: Pointer to the first element of the array to search in
 * @left: Starting index of the range to search
 * @right: Ending index of the range to search
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; ++i)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (binary_search_recursive(array, left, mid, value));
		}
		if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		else
			return (binary_search_recursive(array, left, mid - 1, value));
	}
	return (-1);
}
