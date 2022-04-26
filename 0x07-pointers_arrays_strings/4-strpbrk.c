#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches for a string
 * @s: Character
 * @accept: Character
 *
 * Return: Returns character
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}

	return NULL;
}
