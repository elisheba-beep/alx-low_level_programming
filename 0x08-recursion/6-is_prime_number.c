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

	i = n/2;
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (0);
	
	i = i - 1;

	return (is_prime_number(n));
}
