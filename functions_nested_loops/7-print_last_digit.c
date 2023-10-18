#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number
 *
 * Return: last digit.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int last_digit;
	int last_digit1;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	last_digit1 = last_digit + 48;
	_putchar(last_digit1);

	return (last_digit);
}
