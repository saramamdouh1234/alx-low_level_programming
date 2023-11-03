#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: Size of  array
  * Return: A pointer
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;
	hash_node_t **ar = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	ar = malloc(sizeof(hash_node_t *) * size);
	if (ar == NULL)
		return (NULL);

	for (; i < size; ++i)
		ar[i] = NULL;

	table->size = size;
	table->array = ar;

	return (table);
}
