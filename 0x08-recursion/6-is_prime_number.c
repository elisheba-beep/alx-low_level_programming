#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks for prime numbers
 * @n: the number
 *
 * Return: returns 1 if true and 0 if false
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if its a prime number
 * @n: number
 * @i: iteration
 *
 * Return: 1 if true, 0 if false
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
