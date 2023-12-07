#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - free list
 * @head: list_t type node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *start = head;
	list_t *temp;

	while (start != NULL)
	{
		temp = start->next;
		free(start->str);
		free(start);
		start = temp;	
	}
}
