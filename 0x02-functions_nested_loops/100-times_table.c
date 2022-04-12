#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prnts times table
 * @n: input
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= n)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
				_putchar('0');
			else if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else if (((i * j) < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar(((i * j) % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
