#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == INT_MAX || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
