#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements
 * @h: a pointer to the head of the listint_t
 *
 * Return: the number of elements in the listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
