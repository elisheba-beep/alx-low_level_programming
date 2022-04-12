#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_to_98 - prints from any integer to 98
 * @n: takes an integer n
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for(n = n; n <= 98; n++)
		{
			if (n < 98 && n > 9)
				write(1, "%d, ", n, 4);
			else if (n < 9 && n > 0)
				write(1, "%d, ", n, 3);
			else if (n < 0 && n > -9)
				write(1, "%d, ", n, 3);
			else if (n < -9 && n > -99)
				write(1, "%d, ", n, 4);
			else
				write(1, "%d, ", n, 5);
		}
	}
	else if (n > 98)
	{
		for(n = n; n >= 98; n--)
		{
			if (n == 99)
				write(1, "%d, ", n, 4);
			else
				write(1, "%d, ", n, 5);
		}
	}
	else
		write(1, "%d", n, 2);
}	
		
