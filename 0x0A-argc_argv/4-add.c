#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");

	if (argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
			if(isalpha(argc))
                	{
                        	printf("Error\n");
				return (1);
                	}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
