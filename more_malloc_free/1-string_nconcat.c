#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *string_nconcat - conacatinate the strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat = malloc(strlen(s1) + n + 1);
	unsigned int i;
	unsigned int j;

	if (s2 == NULL)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			concat[i] = s1[i];
		}
		concat[i] = '\0';
		return (concat);
	}

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	concat[i] = '\0';
	return (concat);

}
