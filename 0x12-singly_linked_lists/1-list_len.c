#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints number of elements in a linked list
 * @h: pointer to the first element in the list
 *
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count;
	const list_t *list;

	list = h;

	for (count = 0; list; count++)
		list = list->next;
	char[] result = " elements";

	return (count + result);
}
