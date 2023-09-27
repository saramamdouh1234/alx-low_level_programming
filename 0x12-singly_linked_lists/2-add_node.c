#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a new node at the start of a linked list
 * @head: double pointer to the linked list
 * @str: str to add in the node
 * Return: the address of the new start
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
	unsigned int len = 0;

	while (str[len])
		len++;

	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = (*head);
	(*head) = newlist;

	return (*head);
}
