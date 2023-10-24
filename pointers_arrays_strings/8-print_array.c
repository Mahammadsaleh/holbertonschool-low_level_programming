#include <stdio.h>
#include "main.h"
/**
 * print_array - print the arr
 *
 *@a: array
 *
 *@n: length or array
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");

}
