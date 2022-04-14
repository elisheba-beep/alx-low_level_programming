#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: takes in an int c
 *
 * Return: returns 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
