#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: name of the array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
