#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - checks for an empty string
 * @s: string
 *
 * Return: returns 1 if true amd 0 if false
 */
int is_palindrome(char *s)
{
	if (*s != '\0')
		return (1);

	return (0);
}
