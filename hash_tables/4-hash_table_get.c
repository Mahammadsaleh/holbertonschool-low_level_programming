#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - get key
 * @ht: head
 * @key: key
 *
 * Return: key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int hash_index;

	if (key == NULL || ht == NULL)
		return (0);
	hash_index = key_index((unsigned char *)key, ht->size);
	head = ht->array[hash_index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->key);
		}
		head = head->next;

	}
	return (NULL);
}
