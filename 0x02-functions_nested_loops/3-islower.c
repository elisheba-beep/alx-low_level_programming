#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if character is lowercase
 * Return: returns 1 if lower, 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
