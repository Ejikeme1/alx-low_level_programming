#include "lists.h"

/**
 * print_listint - returns all the element of a linked list.
 * @h: linked list type listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}

