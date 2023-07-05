#include "main.h"
/**
 * verify - verify for the square root
 * @x: int
 * @y: int
 * Return: square root of n or -1
 */
int verify(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (verify(x + 1, y));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (verify(1, n));
}
