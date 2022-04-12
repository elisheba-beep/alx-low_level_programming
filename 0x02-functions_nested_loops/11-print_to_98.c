#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from any integer to 98
 * @n: takes an integer n
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n > 0 && n < 10)
			{
				_putchar((n % 10) + '0');
			}
			else if (n < 0 && n > -9)
			{
				n = n * (-1);
				_putchar('-');
				_putchar((n % 10) + '0');
			}
			else if (n < -9 && n > -99)
			{
				n = n * (-1);
				_putchar('-');
				_putchar((n % 10) + '0');
			}
			else if (n < -99)
			{
				n = n * (-1);
				_putchar('-');
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
				_putchar((((n % 100) % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if(n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
				_putchar((((n % 100) % 10) + '0');
			}
			else if (n == 99)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
