/**
 * File: 1-last_digit.c
 * Auth: Oluwatomiwa S. Ekwunife
 */


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - the main last digit function
 *        prints the last digit and tells if its less than 6,
 *        greater than 5 or 0
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit !0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);

	return (0);
}
