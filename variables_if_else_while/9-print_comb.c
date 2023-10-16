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
	int num = 48;

	while (num < 58)
	{
		if (num != 48)
		{
			putchar(' ');
		}

		putchar(num);
		if (num != 57)
		{
			putchar(',');
		}

		num++;
	}

	putchar ('\n');

	return (0);

}
