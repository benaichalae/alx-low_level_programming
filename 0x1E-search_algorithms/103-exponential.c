#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 * exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL)
		return (-1);

	if (size == 0)
	{
		printf("Value checked array[%u] is out of range\n", 0);
		return (-1);
	}

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	left = bound / 2;
	right = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (_binary_search(array, left, right, value));
}

/**
 * _binary_search - Searches for a value in a sorted array using binary search
 * within a given range.
 * @array: Pointer to the first element of the array to search in
 * @left: Starting index of the range to search
 * @right: Ending index of the range to search
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; ++i)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
