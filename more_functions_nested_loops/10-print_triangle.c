#include <stdio.h>

/**
 * print_triangle - Print a right-aligned triangle of '#' characters.
 * @size: The size of the triangle to be printed.
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - (i + 1); j++)
			{
				putchar(' ');
			}
			for (int j = 0; j <= i; j++)
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

