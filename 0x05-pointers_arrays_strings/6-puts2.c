#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, l;
	char s;

	l = strlen(str);
	for (i = 0; i <= l - 1; i+=2)
	{
		s = str[i];
		puts(s);
	}
	puts("\n");
}
