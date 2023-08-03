#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the integer
 * @index: the index of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	n = n >> index;
	if ((n & 1) != 0)
		return (1);
	return (0);
}
