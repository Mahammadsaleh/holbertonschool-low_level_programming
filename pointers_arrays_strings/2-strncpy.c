#include "main.h"
/**
 * *_strncpy -  copies strings.
 *
 *@dest: string 1
 *
 *@src: string 2
 *@n: number
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
