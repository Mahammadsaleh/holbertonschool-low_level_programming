#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - add first item double list
 * @head: list_t type node
 *
 * Return: void
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int sum = 0;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);

}
