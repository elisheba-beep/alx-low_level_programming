#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints +, - or 0
 * @n: takes an int n
 *
 * Return: returns 1 if +ve, -1 if -ve and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write (1, '+', 1);
		
		return (1);
	}
	else if (n < 0)
	{
		write (1, '-', 1);

		return (-1);
	}
	else
		write (1, '0', 1);
		
		return (0);
}
