#include "main.h"
/**
 * *_strncat -  concatenates two strings.
 *
 *@dest: string 1
 *@n: number
 *@src: string 2
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concated = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';
	return (concated);
}
