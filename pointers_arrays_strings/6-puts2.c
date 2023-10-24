#include "main.h"

/**
 * puts2 - print even.
 *
 * @s: The string to be reversed.
 */
void puts2(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(s[j]);
		}
		j++;
	}

	_putchar('\n');
}

