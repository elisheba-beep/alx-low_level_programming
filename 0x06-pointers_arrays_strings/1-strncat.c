#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: character one
 * @src: character two
 * @n: number of characters from src
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = strlen(src);

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n < k)
		dest[i] = '\0';

	return (dest);
}
