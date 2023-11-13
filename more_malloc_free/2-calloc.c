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

	arr = malloc((nmemb) * size);
	if (nmemb == 0 || size == 0)
	{
		free(arr);
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, (nmemb) * size);
	return (arr);
}
