#include "main.h"
/**
 * verify - check if the int is prime number
 * @x: int
 * @y: int
 * Return: 1 if n is prime number otherwise 0
 */
int verify(int x, int y)
{
	if (x <= 1)
		return (0);
	if (y == 1)
		return (1);
	if (x % y == 0)
		return (0);
	return (verify(x, y - 1));
}
/**
 * is_prime_number - function to check if the int is prime number
 * @n: int to check on
 * Return: 1 if n is prime number otherwise 0
 */
int is_prime_number(int n)
{
	return (verify(n, n - 1));
}
