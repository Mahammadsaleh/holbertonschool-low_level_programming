#include <stdio.h>

/**
 * *_strpbrk - function locates the first occurrence in the string
 *
 * @s: string
 * @accept:
 *
 * Return: Pointer to the concatenated string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s && accept[i] != '\0')
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
