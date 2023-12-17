#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *array = ht->array;
	hash_node_t *node;
	unsigned long int size = ht->size;
	unsigned long int i;
	char *sep = "";

	if (ht == NULL || size == NULL || arry == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = array[i];

		while (node != NULL)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep  = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
