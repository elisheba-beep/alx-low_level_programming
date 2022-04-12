#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * _abs - gets the absolute value
 * @a: takes in an int a
 *
 * Return: returns an int
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
	}
	else
		a = a;

	return (a);
}
