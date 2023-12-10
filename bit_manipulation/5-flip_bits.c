#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index to check
 *
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	for (; index > 0; index--)
		n >>= 1;

	return (n & 1);
}
/**
 * flip_bits - flip the bits
 * @n: num
 * @m: num
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int result;

	result = n ^ m;

	while (result > 0)
	{
		if (get_bit(result, 0) == 1)
			count++;
		result >>= 1;

	}

	return (count);

}
