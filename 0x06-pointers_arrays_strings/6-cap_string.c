#include <stdio.h>
#include "main.h"


/**
 * *cap_string - capitalizes the first letter of a string
 * @*str: string to capitalize
 *
 * Return: returns the string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		continue;
	}
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '	')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
	}
	else if (str[i] == ',' || str[i] == ';' || str[i] == '.')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
	}
	else if (str[i] == '!' || str[i] == '?' || str[i] == '\"')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
	}
	else if	(str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
	}
	str[i] = '\0';

	return (str);
}

