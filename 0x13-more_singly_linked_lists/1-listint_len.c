#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @h: A pointer to the head.
 *
 * Return: The number of elemens
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
