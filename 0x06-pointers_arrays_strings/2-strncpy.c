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
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
