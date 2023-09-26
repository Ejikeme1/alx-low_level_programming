#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t.
 * @h: pointer to the list_t list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		sz++;
		h = h->next;
	}

	return (sz);
}
