#include <stdio.h>

/*to compile without warning*/
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "_Wunused-parameter"
/**
 * main - this is the main function
 * Return: returns 1
 */
int main (void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return(1);
}
