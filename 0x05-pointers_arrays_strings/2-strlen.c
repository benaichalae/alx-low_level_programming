#include "main.h"
/**
 * _strlen - calcule the lenght of a string
 * @s: the char to check
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	for (; *s++;)
		i++;
	return (i);
}
