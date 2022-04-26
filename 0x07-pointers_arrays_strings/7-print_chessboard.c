#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a - the array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;

	i = 0;
	while ((a)[i] != '\0')
	{
		_putchar((a)[i]);
	}
}

