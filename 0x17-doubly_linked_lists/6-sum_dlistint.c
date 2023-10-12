#include "lists.h"

/**
 * sum_dlistint - sum of all data
 * @head: pointer
 * Return:  0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
