#include <stdio.h>

/**
 * main - prints frist 50 fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int c;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
