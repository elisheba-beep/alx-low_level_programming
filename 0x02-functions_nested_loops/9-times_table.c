#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 9)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
