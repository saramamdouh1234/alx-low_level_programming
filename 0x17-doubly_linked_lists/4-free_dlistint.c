#include "lists.h"
/**
* free_dlistint - Free dlistint
* @head: Pointer
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *str;
while (head != NULL)
{
str = head->next;
free(head);
head = str;
}
}
