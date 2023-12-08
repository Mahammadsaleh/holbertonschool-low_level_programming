#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - add first item double list
 * @head: list_t type node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *cur = head;

	while (cur != NULL)
	{
		temp = cur->next;
		free(cur);
		cur = temp;
	}
}
