#include <stdio.h>
#include "main.h"


/**
 * main - prints the name of this program
 * @argc: the size of array argv[]
 * @argv[]: the array with size argc
 *
 * Return: returns 0
 */
int main(int __attribute__((__unused__)) argc, char* argv[])
{
	_printf("%s\n", argv[0]);

	return (0);
}
