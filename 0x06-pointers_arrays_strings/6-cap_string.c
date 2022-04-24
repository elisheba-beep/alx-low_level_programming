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

	int j = 0;
	int s = 13;
	char a[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[j])
	{
		i = 0;
		
		while (i < s)
		{
			if ((j == 0 || str[j - 1] == a[i]) && (str[j] >= 97 && str[j] <= 122))
				str[j] -= 32;

			i++;
		}

		j++;
	}
	return (str);
}
