#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - append file and prints it to the POSIX standard output
 * @filename: file name
 * @text_content: size
 * Return: size of printed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_s;

	if (text_content == NULL)
	{
		text_content = "";
	}
	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	write_s = write(fd, text_content, strlen(text_content));
	if (write_s < 0)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
