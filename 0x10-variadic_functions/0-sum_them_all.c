#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: the parameter
 *
 * Return: returns an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int i, j;

	va_start(sum_list, n);
	j = 0;

	if(n == 0)
		return (0);

	for(i = 0; i < n; i++)
		j += va_arg(sum_list, unsigned int);

	va_end(sum_list);

	return(j);
}
