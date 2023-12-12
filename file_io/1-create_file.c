#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * create_file - create a text file and prints it to the POSIX standard output
 * @filename: file name
 * @text_content: content
 * Return: size of printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (text_content == NULL)
	{
		text_content = "";
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fd = creat(filename, O_RDWR | O_CREAT);
	w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	return (1);
}
