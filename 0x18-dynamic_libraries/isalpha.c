#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: takes an int c
 *
 * Return: returns 1 if alphabetic and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
