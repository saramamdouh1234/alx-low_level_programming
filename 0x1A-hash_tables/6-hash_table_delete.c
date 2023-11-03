#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - Delete hash table.
 * @ht: Hash table.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				cur = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = cur;
			}
		}
	}
	free(ht->array);
	free(ht);
}
