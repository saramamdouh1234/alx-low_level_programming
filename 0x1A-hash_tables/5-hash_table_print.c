#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - Print  hash table.
 * @ht: Hash table.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *cur;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		if (cur != NULL)
		{
			while (cur != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", cur->key, cur->value);
				flag = 1;
				cur = cur->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
