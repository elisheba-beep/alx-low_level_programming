#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (num != 0)
			_putchar('_');
	}
	_putchar('\n');
}
	
