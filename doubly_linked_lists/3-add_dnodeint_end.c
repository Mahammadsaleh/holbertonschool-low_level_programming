#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - add first item double list
 * @head: list_t type node
 * @n: num
 *
 * Return: void
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *cur = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		new_node->n = n;
		new_node->prev = cur;
		new_node->next = cur->next;
		cur->next = new_node;
	}
	return (*head);

}
