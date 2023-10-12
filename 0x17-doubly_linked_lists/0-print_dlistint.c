#include "lists.h"
/**
 * print_dlistint - print all the elements of a list
 * @h: A pointer
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num = num + 1;
	}
	return (num);
}
