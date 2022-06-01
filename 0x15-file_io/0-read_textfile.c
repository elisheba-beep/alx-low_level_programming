#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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
	int fd, i;
	char buf[letters];

	fd = open(filename, O_RDONLY);

	if(fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	read(fd, buf, letters);
	buf[letters] = '\0';
	
	return (letters);
}
