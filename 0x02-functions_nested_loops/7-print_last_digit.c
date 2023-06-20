#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the int to exract the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
		j = j *-1;
	}
	_putchar(j + '0');
	return (j);
}
