#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_djb2 - implementation  djb2 algorithm
 * @str: value in function
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
