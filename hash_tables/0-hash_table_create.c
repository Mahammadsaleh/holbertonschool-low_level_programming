#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: Size of hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_node_t) * size + sizeof(unsigned long int));
	if (hash_t == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	hash_t->size = size;

	return (hash_t);
}
