#include <stdio.h>
#include "main.h"

/**
 * *leet - encodes a string to 1337(leet)
 * @*s: the string to be encoded
 *
 * Return: returns the encoded string
 */
char *leet(char *s)
{
	char n[] = {4, 3, 0, 7, 1};
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char *str = s;
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == l[i] -32 || *s == l[i])
				*s = n[i] + '0';
		}
		s++;
	}
	return (str);
}
