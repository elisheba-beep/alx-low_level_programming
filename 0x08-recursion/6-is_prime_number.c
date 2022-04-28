#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: the number
 *
 * Return: returns 1 if true and 0 if false
 */
int is_prime_number(int n)
{
	int i;

	i = 0 + i;

	if (n <= 2)
		return (n == 2) ? 1 : 0;
	if (n % i == 0)
		return 0;
	if (i * i > n)
		return 1;
	i++;
	return is_prime_number(n);
