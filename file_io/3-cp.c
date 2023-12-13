#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void args_checker(int cnt)
{
	if (cnt != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
void file_from_checker(int checked_file, char *filename)
{
	if (checked_file == -1)
        {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		close(checked_file);
		exit(98);
	}
}
void file_to_checker(int checked_file, char *filename)
{
        if (checked_file == -1)
        {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		close(checked_file);
		exit(99);
        }
}
void check_close(int closed_file, int fd)
{
	if (closed_file == -1)
        {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
        }
}
int main(int ac, char **av)
{
	mode_t mask;
	ssize_t rlen, wlen;
	int fd_from, fd_to, close_to, close_from;
	char buffer[1024];

	args_checker(ac);
	mask = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_from = open(av[1], O_RDONLY);
	file_from_checker(fd_from, av[1]);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mask);
	file_to_checker(fd_to, av[2]);
	while ((rlen = read(fd_from , buffer, 1024)) > 0)
	{
		wlen = write(fd_to, buffer, rlen);
		if (rlen != wlen)
			fd_to = -1;
		file_to_checker(fd_to, av[2]);
	}
	close_from = close(fd_from);
        close_to = close(fd_to);
        check_close(close_from, fd_from);
        check_close(close_to, fd_to);
	return (0);
}
