#include <math.h>
#include "main.h"

/**
 * _abs - gets the absolute value
 * @n: takes in an int n
 *
 * Return: returns an int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	else
		n = n;

	return (n);
}
