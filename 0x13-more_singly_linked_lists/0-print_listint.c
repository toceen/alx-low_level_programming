#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element of a listint_t
 * @h: a pointer the the head of the list_t
 *
 * Return: the number of nodes in the list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
