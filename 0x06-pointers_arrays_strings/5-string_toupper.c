#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - changes lowercase to upper
 * @*s: pointer of the character
 *
 * Return: returns the uppercase value
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ( s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
