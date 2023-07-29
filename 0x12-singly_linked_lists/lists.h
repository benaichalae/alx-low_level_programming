#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct list_t - linked list
 * @str: malloc string
 * @len: string lenght
 * @next: pointer to the next node
 */

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *h);

#endif
