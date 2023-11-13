#include <stdlib.h>
/**
 * *malloc_checked - check the malloc
 * @b: size
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}

	return ptr;
}
