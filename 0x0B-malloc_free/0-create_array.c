#include "main.h"
#include <stdlib.h>

/**
 * * create_array - create an array of and initialize it with a specific value
 * @size: the size of the array
 * @c: the value with which the array should be initialized
 * Return:  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
