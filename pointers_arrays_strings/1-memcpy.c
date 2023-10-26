#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copy memory area
 * @dest: destiny
 * @src: source
 * @n: number of size
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start_pointer = dest;
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (start_pointer);

}
