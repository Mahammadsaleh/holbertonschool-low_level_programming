#include "main.h"
#include <stdio.h>

/**
 * *_strchr - check the code
 * @s: string
 * @c: char
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	while (*s != c)
	{
		s++;
	}
	ptr = s;
	return (ptr);

}
