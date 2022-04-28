#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - square root of a number
 * @n: the number
 *
 * Return: returns the square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds the square root
 * @n: number
 * @i: iterate
 *
 * Return: returns the square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
