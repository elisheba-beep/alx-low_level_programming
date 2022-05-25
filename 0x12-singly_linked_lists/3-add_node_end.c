#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer
 * @str: pointer
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list-t *node, *list;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(node->str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	list = *head;
	while (list->next)
		list = list->next;
	list->next = node;

	return (node);
}
