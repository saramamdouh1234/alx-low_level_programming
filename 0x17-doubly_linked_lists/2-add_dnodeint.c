#include "lists.h"

/**
 * add_dnodeint - add a new node.
 * @head: pointer.
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_new_node;

	add_new_node = malloc(sizeof(dlistint_t));
	if (add_new_node == NULL)
		return (NULL);

	add_new_node->n = n;
	add_new_node->prev = NULL;
	add_new_node->next = *head;
	if (*head)
		(*head)->prev = add_new_node;
	*head = add_new_node;

	return (add_new_node);
}
