#include "lists.h"

/**
 * dlistint_len - counts number of nodes
 * @h: A pointer
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
