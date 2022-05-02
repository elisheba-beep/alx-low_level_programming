#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets length of a prefix
 * @s: character s
 * @accept: character
 *
 * Return: returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = strspn(s, accept);

	return (i);
}
