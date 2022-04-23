#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - changes lowercase to upper
 * @*: pointer of the character
 *
 * Return: returns the uppercase value
 */
char *string_toupper(char *)
{
	char n[];
	int i;

	* = &n;
	while (n[i] != '\0')
	{
		if ( n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
