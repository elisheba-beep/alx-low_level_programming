#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: takes in an integer n
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
