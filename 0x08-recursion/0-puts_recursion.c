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
	if (*s == '\0')
		_putchar('\n');
	_putchar(s);
	_putchar(_puts_recursion s + 1);
}
