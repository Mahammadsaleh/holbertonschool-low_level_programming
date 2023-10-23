#include "main.h"
#include <stdio.h>

/**
 * swap_int - swapping the var
 * @a: num1
 * @b: num2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = *a;
	temp2 = *b;

	*a = temp2;
	*b = temp1;
}

