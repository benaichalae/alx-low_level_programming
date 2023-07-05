#include "main.h"
/**
 * _print_rev_recursion - function to prints a string in reverse
 * @s: the string that will be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
