#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);

}
