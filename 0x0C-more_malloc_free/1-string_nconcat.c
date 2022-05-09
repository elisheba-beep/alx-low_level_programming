#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: no of bytes
 *
 * Return: returns the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	string = malloc(sizeof(char) * (l + 1));

	if (string == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		string[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		string[l++] = s2[i];

	string[l] = '\0';

	return (string);
}
