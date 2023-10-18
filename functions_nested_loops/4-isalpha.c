#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check the code.
 * @c: Character
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}

