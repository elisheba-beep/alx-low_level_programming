#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: Returns a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);

	return (res);
}
