#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: takes an integer c
 *
 * Return: returns 1 if its a diit and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}