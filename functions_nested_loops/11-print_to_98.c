#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (int i = n; i > 97; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (int i = n; i < 99; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	printf("\n");
}

