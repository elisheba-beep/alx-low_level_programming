#include <stdio.h>

/**
 * main - prints numbers using putchar
 * Return: returns 0
 */
int main(void)
{
	int num;

	for( num = 0; num <= 9; num++)
	{
		putchar((num%10)* 10);
	}
	putchar('\n');

	return (0);
}
