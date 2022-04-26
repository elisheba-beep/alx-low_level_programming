#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @*dest: character
 * @*src: character
 * @n: number of bytes
 *
 * Return: returns a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	while (i < n)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

