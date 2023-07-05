#include "main.h"
/**
 * verify - vcheck the two string if they are identical
 * @s1: first string
 * @s2: second string
 * @x: int
 * @y: int
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int verify(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
		return (1);
	if (s1[x] == s2[y])
		return (verify(s1, s2, x + 1, y + 1));
	if (s1[x] == '\0' && s2[y] == '*')
		return (verify(s1, s2, x, y + 1));
	if (s2[y] == '*')
		return (verify(s1, s2, x + 1, y) || verify(s1, s2, x, y + 1));
	return (0);
}
/**
 * wildcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	return (verify(s1, s2, 0, 0));
}
