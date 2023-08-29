#include "lists.h"

/**
 * pop_listint - Deletes the head node 
 * @head: A pointer to the address of the head
 * Return: If the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int str;

	if (*head == NULL)
		return (0);

	tmp = *head;
	str = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (str);
}
