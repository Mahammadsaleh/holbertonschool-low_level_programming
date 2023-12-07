#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len - prind double list
 * @h: list_t type node
 *
 * Return: void
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
