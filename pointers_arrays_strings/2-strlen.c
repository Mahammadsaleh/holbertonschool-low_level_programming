#include "main.h"
#include <stdio.h>
/**
 * _strlen - find length of string
 * @s: character
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	char last_char;
	int i = 0;

	while (last_char != '\0')
	{
		last_char = *(s + i);
		i++;
	}

	return (i - 1);
}
