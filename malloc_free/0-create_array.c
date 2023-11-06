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

	arr = malloc(size * sizeof(char));
	if (size == INT_MAX || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
