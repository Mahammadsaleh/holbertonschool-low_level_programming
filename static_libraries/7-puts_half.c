#include "main.h"

/**
 * puts_half - print half.
 *
 * @s: The string to be reversed.
 */
void puts_half(char *s)
{
	int length = 0;
	int start;

	while (s[length] != '\0')
	{
		length++;
	}

	start = length / 2;

	if (length % 2 != 0)
	{
		start += 1;
	}

	while (s[start] != '\0')
	{
		_putchar(s[start]);
		start++;
	}

	_putchar('\n');
}

