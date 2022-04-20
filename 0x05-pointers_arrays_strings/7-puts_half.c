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
	int l, mid, i;

	l = strlen(str);
	mid = l / 2;
	for (i = mid, i <= l; i++)
	{
		half[i] = str[i];
	half[i] = '\0';
	printf("%s\n", half);
}
