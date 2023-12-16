#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add or update
 * @value: value associated with the key
 *
 * Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp_h;
	char *new_val;
	unsigned long int hash_index;

	if ( key == NULL || ht == NULL || value == NULL)
		return (0);
	hash_index = key_index((unsigned char*)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if(ht->array[hash_index] == NULL)
	{
		ht->array[hash_index] = new_node;
		return (1);
	}
	tmp_h = ht->array[hash_index];
	while (tmp_h != NULL)
	{
		if (strcmp(tmp_h->key, key) == 0)
		{	
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			tmp_h->value = new_val;
			free(new_node);
			return (1);
		}
		tmp_h = tmp_h->next;
	}
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;
	return (1);	
}
