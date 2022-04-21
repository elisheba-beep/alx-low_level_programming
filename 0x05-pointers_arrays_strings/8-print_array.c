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
	int i, count;

	i = 0;
	count = 1;
	if (n < 0)
	{
		while (a[i] != '\0' && count < n)
		{
			print("%d, ", a[i]);
			i++;
			count++;
		}
		printf("%d\n", a[i]);
	}
}
