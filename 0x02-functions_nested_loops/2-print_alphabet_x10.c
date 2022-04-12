#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints a-z n 10 new lines
 * Return: void
 */
void print_alphabet_x10(void)
{
	char n = 0;

	while (n < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
