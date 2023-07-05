#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string that will be calculed
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}
	return (n);
}
