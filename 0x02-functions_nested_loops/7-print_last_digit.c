#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * print_last_digit - prints last digit
 * @n: takes in an int n
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int res = n % 10;

	if (res < 0)
	{
		res = (-1) * res;
	}

	_putchar(res + '0');

	return (res);
}
