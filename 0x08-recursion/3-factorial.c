#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: the int that will be calculated
 * Return : -1 if n is lower than 0, 1 if n equal to 0 and the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
