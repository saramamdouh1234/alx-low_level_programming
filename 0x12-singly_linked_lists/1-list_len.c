#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list to evaluate
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;
	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
