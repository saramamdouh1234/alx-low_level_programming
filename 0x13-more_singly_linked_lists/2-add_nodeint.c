#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beging
 * @head: Pointer to the address of the head
 * @n: The integer for the new node
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
        ptr->next = *head;

	*head = ptr;

	return (ptr);
}
