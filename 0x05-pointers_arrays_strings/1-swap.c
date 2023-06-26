#include "main.h"
/**
 * swap_int - swap two integers
 * @a: the int to swap with b
 * @b: the int to swap with a
 * @c: the int to help swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
