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
	n--;
	while (n > 0)
	{
		dest[n] = src[n];
		n--;
	}
}

