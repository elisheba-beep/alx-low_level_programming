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
	char *begin_ptr, *end_ptr, ch;

	l = strlen(str);
	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < l -1; i++)
		end_ptr++;
	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
