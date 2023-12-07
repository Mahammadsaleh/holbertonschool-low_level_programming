#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ad node to the first index of list
 * @head: list_t type node
 * @str: string
 *
 * Return: ptr
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (*head == NULL)
	{
		*head = (list_t *)malloc(sizeof(list_t));
		if (*head == NULL)
		{
			free(*head);
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	current->next = new_node;
	return (*head);
}
