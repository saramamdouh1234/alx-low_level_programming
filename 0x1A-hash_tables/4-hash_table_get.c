#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - Get a value.
 * @ht: Hash table.
 * @key: Key.
 * Return: the value associated with the element,
 * or NULL if not  found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[index];
	if (cur == NULL)
		return (NULL);
	while (strcmp(cur->key, key) && cur != NULL)
	{
		cur = cur->next;
	}
	if (cur == NULL)
		return (NULL);
	else
		return (cur->value);
}
