#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string and a new line
 * @s: the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if ((s + 1) == '\0')
		_putchar('\n');

	_putchar(*s);
	_puts_recursion (s + 1);
}
