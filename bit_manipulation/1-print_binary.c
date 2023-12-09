#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int r;

	if (n > 1)
		print_binary(n >> 1);

	r = n & 1;
	putchar(r + '0');
}
