#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: A pionter
 * @index: index 
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nod_1, *nod_2;
	unsigned int i;

	nod_1 = *head;

	if (nod_1 != NULL)
		while (nod_1->prev != NULL)
			nod_1 = nod_1->prev;

	i = 0;

	while (nod_1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = nod_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				nod_2->next = nod_1->next;

				if (nod_1->next != NULL)
					nod_1->next->prev = nod_2;
			}

			free(nod_1);
			return (1);
		}
		nod_2 = nod_1;
		nod_1 = nod_1->next;
		i++;
	}

	return (-1);
}
