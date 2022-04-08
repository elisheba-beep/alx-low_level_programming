#include <stdio.h>

/** main - main function for alphabet
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar("%c ", ch);
	
	return (0);
}
