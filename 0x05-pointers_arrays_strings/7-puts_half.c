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
	char secondHalf;
	int l, i;

	l = strlen(str);
	for (i = (l / 2); i <= l; i++)
	{
		secondHalf[i] = str[i];
	}
	secondHalf[i] = '\0';
	printf("%.*s\n", l, secondHalf);
}
