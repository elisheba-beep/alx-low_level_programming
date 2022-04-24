#include <stdio.h>
#include "main.h"

/**
 * *rot13 - changes to rot13
 * @*s: word to be changed
 *
 * Return: returns the encoded string
 */
char *rot13(char *s)
{
	int i;
	char alp[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 
		'M', 'N', 'O', 'P', 'Q', 'R', 
		'S', 'T', 'U', 'V', 'W', 'X', 
		'Y', 'Z', 'a', 'b', 'c', 'd', 
		'e', 'f', 'g', 'h', 'i', 'j', 
		'k', 'l', 'm', 'n', 'o', 'p', 
		'q', 'r', 's', 't', 'u', 'v', 
		'w', 'x', 'y', 'z'}
	char rot13alp[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};
	int j = 0;

	while (s[j])
	{
		for (i = 0; i < 52; i++)
		{
			if (s[j] == alp[i])
			{
				s[j] = rot13alp[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
