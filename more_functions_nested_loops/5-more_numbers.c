#include "main.h"
/**
 * more_numbers - returns 1 if char is lowercase
 *
 *
 * Return: from 0 to 14
 **/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}

			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}
