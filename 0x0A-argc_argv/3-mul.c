#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	for (i = 1; i < argc; i++)
	{
		if (argc < 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mul *= atoi(argv[i]);
		}
	}

	return (0);
}

	
