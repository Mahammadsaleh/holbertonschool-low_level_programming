#include <stdio.h>

/**
 * main - Entry point
 *
 * This function generates a random number and determines if it's positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 122;

	while (num > 96)
	{
		putchar(num);
		num--;
	}

	putchar ('\n');

	return (0);

}

