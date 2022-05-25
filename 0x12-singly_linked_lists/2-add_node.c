#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a node to the top of the list
 * @head: pointer
 * @str: pointer
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	list->str = strdup(str);
	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}
	list->len = strlen(list->str);
	list->next = *head;
	*head = list;

	return (list);
}


