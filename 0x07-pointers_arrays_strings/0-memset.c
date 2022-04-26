#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @*s: pointer to memory area
 * @b: the constant byte
 * @n: number of bytes of memory area
 *
 * Return: returns char s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

