#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to put in half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
