#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - add first item double list
 * @head: list_t type node
 * @index: index
 *
 * Return: void
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
	}
		while (cur->next != NULL && index - 1 != counter)
		{
			cur = cur->next;
			counter++;
		}
		if (index - 1 > counter)
		{
			return (-1);
		}
		else
		{
			tmp = cur->next;
			cur->next = cur->next->next;
			free(tmp);
			if (cur->next != NULL)
				cur->next->prev = cur;
		}
	return (1);
}
