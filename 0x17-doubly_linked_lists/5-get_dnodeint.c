#include "lists.h"

/**
  * get_dnodeint_at_index -  node of a dlistint
  * @head: A pionter
  * @index: index
  * Return: NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (x == index)
			return (node);
		node = node->next;
		x += 1;
	}
	return (NULL);
}
