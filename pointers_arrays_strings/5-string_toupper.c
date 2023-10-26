#include "main.h"
/**
 * *string_toupper - lower to uppercase
 *
 * @c: character
 *
 * Return: char
 */
char *string_toupper(char *c)
{
	char *p = c;

	while (*c != '\0')
	{
		if (*c > 96 && *c < 123)
		{
			*c = *c - 32;
		}
		c++;
	}
	return (p);
}
