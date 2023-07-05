#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int that will be raised
 * @y: int that will be used to raise by
 * Return: -1 if y lower than 0, 1 if y equal to 0 and int that is calculated
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
