#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string
 * @str: character
 *
 * Return: void
 */

void print_rev(char *str)
{
		char last;
		int i = 0;

		while (last != '\0')
		{
			last = *(str + i);
			i++;
		}
		i--;
		i--;
		while (i != -1)
		{
			last = *(str + i);
			_putchar(last);
			i--;
		}
		_putchar('\n');
}
