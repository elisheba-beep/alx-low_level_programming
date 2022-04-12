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
	for(n = n; n <= 98; n++)
	{
		if (n < 98 && n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < 9 && n > 0)
		{
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < 0 && n > -9)
		{
			n = (-1) * n;
			_putchar('-');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < -9 && n > -99)
		{
			n = (-1) * n;
			_putchar('-');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			n = (-1) * n;
			_putchar('-');
			_putchar((n / 100) + '0');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	for(n = n; n >= 98; n--)
	{
		if (n == 99)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if ( n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}	
		
