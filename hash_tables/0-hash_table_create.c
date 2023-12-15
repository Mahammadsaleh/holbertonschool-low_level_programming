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
	hash_node_t *array = malloc(sizeof(hash_node_t)*size);
	hash_table_t *hash_t;

	if (array == NULL)
	{
		return (NULL);
	}

	hash_t = malloc(sizeof(array) + size);
	if (hash_t == NULL)
		return (NULL);

	return (hash_t);
}
