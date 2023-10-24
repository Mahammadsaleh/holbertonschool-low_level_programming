#include "main.h"

/**
 * puts_half - print half.
 *
 * @s: The string to be reversed.
 */
void puts_half(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}

