#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: the string
 *
 * Return: returns the length of s
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s == '\0')
		return l;
	l++;
	return _strlen_recursion(s + 1);
}
