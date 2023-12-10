#include "main.h"

/**
 * set_bit - set the value of a bit at a given index
 * @n: number to check
 * @index: index to check
 *
 * Return: int ptr
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	*n |= mask;
	return (*n);
}
