#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers
 * @min: minumum
 * @max: maximum
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int i;
	int j = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((unsigned int)(max - min) * sizeof(arr));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
