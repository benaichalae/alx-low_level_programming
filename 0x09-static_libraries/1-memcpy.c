#include "main.h"
/**
 * _memcpy - copy memory from src to dest
 * @dest: memory area to paste on
 * @src: memory area to copy from
 * @n: function that will be copied
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
