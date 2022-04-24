#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: returns a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
