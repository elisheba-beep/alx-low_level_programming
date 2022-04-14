#include <stdio.h>
#include "main.h"

/**
 * print_number - prints any number ont character at a time
 * @n: the number to print
 *
 * Return: void
 */
void print_number(int n)
{
	long n1;
	long n2 = n;

	if (n2 < 0)
	{
		_putchar('-');
		n2 *= -1;
	}
	if (n2 / 100000 != 0)
	{
		n1 = n2 / 100000;
		_putchar(n1 / 10000 % 10 + '0');
		_putchar(n1 / 1000 % 10 + '0');
		_putchar(n1 / 100 % 10 + '0');
		_putchar(n1 / 10 % 10 + '0');
		_putchar(n1 % 10 + '0');
	}
	if (n1 / 10000 % 10 != 0)
	{
		n1 = n2 % 100000;
		_putchar(n1 / 10000 % 10 + '0');
		_putchar(n1 / 1000 % 10 + '0');
		_putchar(n1 / 100 % 10 + '0');
		_putchar(n1 / 10 % 10 + '0');
	}
	else if (n1 / 100 % 10 != 0)
	{
		_putchar(n1 / 100 % 10 + '0');
		_putchar(n1 / 10 % 10 + '0');
	}
	else if (n1 / 10 % 10 != 0)
		_putchar(n1 / 10 % 10 + '0');
	_putchar(n1 % 10 + '0');
}
