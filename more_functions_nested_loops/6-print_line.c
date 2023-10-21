#include <unistd.h>
#include "main.h"
/**
 * print_line - just print line
 * @n: just a number
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
