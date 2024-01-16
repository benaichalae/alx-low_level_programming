#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * using interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;
	double tmp;

	if (array == NULL)
		return (-1);
	while (array[high] != array[low])
	{
		tmp = (double)(high - low) / (array[high] - array[low]);
		pos = low + (tmp * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (value == array[low] ? (int)low : -1);
}
