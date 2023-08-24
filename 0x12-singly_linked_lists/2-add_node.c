#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *ptr;

	new = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

        ptr->str = dup;
	ptr->len = len;
	ptr->next = *head;

	*head = ptr;

	return (ptr);

}
