#include <stdio.h>

/**
 * array_iterator - Applies a function to each element of an array
 * @array: Array to be traversed
 * @size: Size of the array
 * @action: Pointer to the function to be applied to each element
 *
 * Description: This function applies the function `action` to each element of
 * the `array`.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

