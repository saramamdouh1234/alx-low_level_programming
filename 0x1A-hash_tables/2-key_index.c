#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index -  index of  key in a hash table
  * @key: The key
  * @size: The size of  hash table
  *
  * Return: A hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
