#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - Delete hashtable
 * @ht: A pointer
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *he = ht;
	hash_node_t *node, *tmp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(he->array);
	free(he);
}
