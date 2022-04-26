#include "main.h"
#include <stdio.h>


/**
 * *_strchr - locates a character
 * @s: the string
 * @c: the character to return
 *
 * Return: returns a character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < (strlen(s) - 1); i++)
	{
		if (s[i] == c)
			return (s);
	}
	return NULL;
}
