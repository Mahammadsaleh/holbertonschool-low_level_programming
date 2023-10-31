#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Print a right-aligned triangle of '#' characters.
 * @size: The size of the triangle to be printed.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
			{
				putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

