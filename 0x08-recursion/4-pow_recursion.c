#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - x to the power of y
 * @x: the value
 * @y: the power
 *
 * Return: returns x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	return (-1);
}
