#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints a-z
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
