#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	str = malloc(sizeof(char) * l);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[j++] = s2[i];

	return (str);
}

