#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute
 * Return: void
 */
void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
			_putchar(':');
			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
			if (num1 == 23 && num2 == 59)
				continue;
			_putchar('\n');
		}
	}
}