#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the character to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char rev;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
		rev = s[i];
	s = rev;
}
