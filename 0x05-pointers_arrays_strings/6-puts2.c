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
	for (int i = 0; i < strlen(str); i +=2)
	{
		puts(str[i]);
	}
}
