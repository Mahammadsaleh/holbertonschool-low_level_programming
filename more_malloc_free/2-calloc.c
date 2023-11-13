#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *_calloc -  allocates memory for an array
 * @nmemb: elemnts
 * @size:size
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc((nmemb + 1) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
