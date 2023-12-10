#include "main.h"
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
