#include <stdio.h>
#include <string.h>
/**
 * _strstr - finds the first occurrence of the substring
 *
 * @haystack: Destination string
 * @needle: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
