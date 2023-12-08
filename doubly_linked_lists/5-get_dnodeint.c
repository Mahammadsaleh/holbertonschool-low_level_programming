#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - add first item double list
 * @head: list_t type node
 * @index: num
 *
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int j = 0;

	while (index != j && cur->next != NULL)
	{
		cur = cur->next;
		j++;
	}

	if (index > j)
	{
		return (NULL);
	}

	return (cur);

}
