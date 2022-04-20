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
	int i;
	char s;

	for (i = 0; i < strlen(str); i +=2)
	{
		_putchar(str[i]);
		s[i/2] = str[i];
	}
	printf("%s", s);
}
