#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal
 * @n: num length
 *
 *
 * Return: void
 **/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
