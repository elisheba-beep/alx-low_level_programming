#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two integers
 * @a, b: integers to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
