#include "main.h"

/**
 * puts_half - print half.
 *
 * @s: The string to be reversed.
 */
void puts_half(char *s)
{
	int i = 0;
	int half;

	while (s[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		half = i / 2;
	}
	else
	{
		half = (i - 1) / 2;
	}

	while (s[half] != '\0')
	{
		_putchar(s[half]);
		half++;
	}

	_putchar('\n');
}

