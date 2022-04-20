#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: the character s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l, i;

	l = strlen(s);

	for (i = l-1; i >= 0; i--)
		printf("%c", s[i]);
}
