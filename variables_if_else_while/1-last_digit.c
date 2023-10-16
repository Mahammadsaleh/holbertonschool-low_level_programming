#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is ", n, abs(n) % 10);
		printf("greater than 5\n");
	}
	else if (abs(n) % 10 == 0)
	{
		printf("Last digit of %d is %d and is ", n, abs(n) % 10);
		printf("0\n");
	}
	else if (n % 10 < 6 && abs(n) != 0)
	{
		printf("Last digit of %d is %d and is ", n, abs(n) % 10);
		printf("less than 6 and not 0\n");
	}
	return (0);
}

