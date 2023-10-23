#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: character
 *
 * Return: void
 */

void _puts(char *str)
{
	char last;
	int i = 0;

	while (last != '\0')
	{
		last = *(str + i);
		if (last != '\0')
		{
			_putchar(last);
		}
		i++;
	}
	_putchar('\n');
}

