#include "main.h"
#include <string.h>
/**
 * verify - check if a string is palindrome
 * @s: the string to check on
 * @x: int
 * @y: int
 * Return: 1 if string is palindrome otherwise 0
 */
int verify(char *s, int x, int y)
{
	if (x >= y)
		return (1);
	if (s[x] != s[y])
		return (0);
	return (verify(s, x + 1, y - 1));
}
/**
 * is_palindrome - check if a string is palindrome
 * @s: the string to check on
 * Return: 1 if string is palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (verify(s, 0, length - 1));
}
