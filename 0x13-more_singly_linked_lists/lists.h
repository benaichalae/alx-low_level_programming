#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct listint_s - singly linked lists
 * @n: integer
 * @next: pointer to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
