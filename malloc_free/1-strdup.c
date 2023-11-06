#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: stsing
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str) + 1;
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}

	return (arr);

}
