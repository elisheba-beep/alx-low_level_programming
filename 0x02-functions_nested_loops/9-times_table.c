#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
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

