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
	char lowercase = 'a';
	char uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}

