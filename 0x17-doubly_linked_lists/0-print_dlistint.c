#include <stdio.h>
#include "ists.h"

/**
 * print_dlistint - prints elements in a dlistint_t
 * @h: head
 *
 * Return: number of nodes
 */
 
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
	}

	return (nodes);
}
