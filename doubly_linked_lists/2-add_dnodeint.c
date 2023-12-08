#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - add first item double list
 * @head: list_t type node
 * @n: num
 *
 * Return: void
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

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
		new_node->n = n;
		new_node->prev = (*head)->prev;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);

}
