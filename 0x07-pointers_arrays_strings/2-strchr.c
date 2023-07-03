#include "main.h"
/**
 * _strchr - function to search char c in a string s
 * @s: the string that we will search on
 * @c: the character that we are looking for
 * Return: the pointer of the character c on string s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

