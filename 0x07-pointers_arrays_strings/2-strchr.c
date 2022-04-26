#include "main.h"
#include <stdio.h>


/**
 * _strchr - locates a character
 * @s: the string
 * @c: the character to return
 *
 * Return: returns a character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			s[i] = s[i + 1];
		}

	}
	return '\0';
}
