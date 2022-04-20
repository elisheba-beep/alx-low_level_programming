#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
