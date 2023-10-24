#include "main.h"

/**
 * puts_half - print half.
 *
 * @s: The string to be reversed.
 */
void puts_half(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if ((i) % 2 == 1)
	{
		i = (i) / 2;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}

	_putchar('\n');
}

