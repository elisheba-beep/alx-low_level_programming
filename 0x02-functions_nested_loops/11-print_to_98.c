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
	int num;

	if (n < 98)
	{
		for(num = n; num <= 98; num++)
		{
			if(num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else 
	{
		for(num = n; num >= 98; num--)
		{
			if(num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
