#include <stdio.h>
#include "main.h"

/** *_strncat - concatenates two strings
 * @dest: character one
 * @src: character two
 * @n: number of characters from src
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j]
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
