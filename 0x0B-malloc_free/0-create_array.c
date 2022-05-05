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

	str = malloc(sizeof(char) * size);
	*str = c;

	if (size == 0)
		return (NULL);

	return (str);
}

