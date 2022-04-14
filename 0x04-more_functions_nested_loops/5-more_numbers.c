#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * more_numbers - prints 10 times from 0-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, c;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar((n % 10) + '0');
		}
		write(1, "\n", 2);
	}
}

