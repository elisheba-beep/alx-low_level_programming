#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the array
 *
 * Return: returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

