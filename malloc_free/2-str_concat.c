#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A newly allocated concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	char *conc;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = strlen(s1) + strlen(s2) + 1;
	conc = (char *)malloc(size * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		conc[i] = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0')
	{
		conc[i] = *s2;
		i++;
		s2++;
	}

	conc[i] = '\0';

	return (conc);
}

