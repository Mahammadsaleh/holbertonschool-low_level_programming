#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - add first item double list
 * @h: list_t type node
 * @idx: num
 * @n: num
 *
 * Return: void
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *cur = *h;

	unsigned int counter = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(&(*h), n));
	}
	else
	{
		while (cur->next != NULL && idx - 1 != counter)
		{
			cur = cur->next;
			counter++;
		}
		if (idx - 1 > counter)
		{
			return (NULL);
		}
		else
		{
			new_node->n = n;
			new_node->prev = cur;
			new_node->next = cur->next;
			cur->next = new_node;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;

		}
	}
	return (new_node);
}
