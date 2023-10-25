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
		if (i < src_len)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
