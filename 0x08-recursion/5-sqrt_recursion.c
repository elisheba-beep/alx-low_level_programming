#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - square root of a number
 * @n: the number
 *
 * Return: returns the square root of n
 */
int _sqrt_recursion(int n)
{
	int min = n % 2;
	int max = n / 2;

	if (max < min)
		return (-1);
	int guess = (min + max) / 2;
	int guess_square = guess * guess;

	if (guess_square == n)
		return (guess);
	if (guess_square < n)
	{
		guess++;
		return (_sqrt_recursion(n));
	}
	if (guess_square > n)
	{
		guess--;
		return (_sqrt_recursion(n));
	}
}

