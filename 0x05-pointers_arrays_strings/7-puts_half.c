#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to put in half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int s, l;

	l = strlen(str);
	s = (l / 2);
	printf("%.*s\n", l, (str + s));
}
