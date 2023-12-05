#include <stdio.h>
#include "lists.h"
/**
 * list_len - length of list
 * @h: list_t type node
 *
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);

}
