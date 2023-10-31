#include "main.h"
#include <stdio.h>
#include <stdbool.h>
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

		while (true)
		{
			last = *(str + i);
			if (last != '\0')
			{
				i++;
			}
			else
			{
				break;
			}
		}

		while (i != -1)
		{
			last = *(str + i);
			_putchar(last);
			i--;
		}
		_putchar('\n');
}
