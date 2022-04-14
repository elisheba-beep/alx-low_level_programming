#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the integer that shows the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= (size - a))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
