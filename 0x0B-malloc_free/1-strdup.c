#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - pointer which contains a copy of a string
 * @str: the string
 *
 * Return: returns a pointer to the string
 */
char *_strdup(char *str)
{
	char *s;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[l] = '\0';

	return (s);
}
