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
	char half;
	int l, mid, i, k;

	l = strlen(str);
	mid = l / 2;
	for (i = mid, k = 0; i <= l; i++, k++)
	{
		half[k] = str[i];
		half[k] = '\0';

	printf("%s\n", half);
}
