#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of each elements
*
*Return: poiner to the address
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (j = 0; j < (nmemb * size); j++)
		ptr[j] = 0;
		return (ptr);
	}
	else
		return (NULL);
}
