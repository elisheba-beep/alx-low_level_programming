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
	if size > 0
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = size - i; j > 0; j--)
			       _putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}	
