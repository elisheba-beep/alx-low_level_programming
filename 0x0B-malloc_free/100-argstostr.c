#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates arguments in the program
 * @ac: one argument
 * @av: the second argument
 *
 * Return: returns concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, c = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}

	str = malloc(sizeof(char) * (c + 1));

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];

		str[i++] = '\n';
	}

	str[c] = '\0';

	return (str);
}
