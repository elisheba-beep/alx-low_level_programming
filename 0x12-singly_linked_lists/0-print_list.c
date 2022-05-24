#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in the list_t list
 * @h: pointer to the first element in the list
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *first;
	unsigned int count;

	first = h;

	for (count = 0; first; count++)
	{
		if (str == NULL)
			printf("[0] (nil)");
		printf("[%u] %s", first->len, first->str);
		first = first->next;
	}
}
