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
	printf("%s", strrev(s));
}
