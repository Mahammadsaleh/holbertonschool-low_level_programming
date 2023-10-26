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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}

}
