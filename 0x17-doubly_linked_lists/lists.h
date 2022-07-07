#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - a doubly linked list
 * @n: the integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked lists in c programming
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* _LISTS_H_ */
