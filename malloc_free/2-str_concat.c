#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * concat_strings - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A newly allocated concatenated string, or NULL on failure.
 */
char *concat_strings(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		return (strdup(s2));
	}
	else if (s2 == NULL)
	{
		return (strdup(s1));
	}
	else
	{
		char *conc = (char *)malloc(strlen(s1) + strlen(s2) + 1);

		if (conc == NULL)
		{
			return (NULL);
		}

		strcpy(conc, s1);
		strcat(conc, s2);
		return (conc);
	}
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A newly allocated concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	return (concat_strings(s1, s2));
}

