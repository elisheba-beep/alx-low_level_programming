#include <stdio.h>

/**
 * main - prints hex numbers
 * Return: returns 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
