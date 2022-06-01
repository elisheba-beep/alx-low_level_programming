#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: the filename
 * @letters: the number of letters
 *
 * Return: 0 for failure, the number of letters success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	buf = malloc(sizeof(char) * letters);

	if(buf == NULL)
	{
		return (0);
	}

	if(o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	free(buf);
	close(o);
	
	return (w);
}
