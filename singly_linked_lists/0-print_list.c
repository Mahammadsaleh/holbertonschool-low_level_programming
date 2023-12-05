#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: list_t type node
 *
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	while ( h != NULL)
	{
		counter++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (counter);
}
