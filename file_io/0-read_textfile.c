#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: size
 * Return: size of printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_s;
	ssize_t write_s;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	read_s = read(fd, buffer, letters);
	if (read_s < 0)
	{
		free(buffer);
		return (0);
	}

	write_s = write(1, buffer, read_s);
	if (write_s < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (write_s);
}
