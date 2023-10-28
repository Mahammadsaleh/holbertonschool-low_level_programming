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
	int i;
	int start = -1;
	char *p = haystack;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			start = i;
			break;
		}
	}

	if (start == -1)
	{
		return NULL;
	}

	p = &haystack[i];

	return (p);
}
