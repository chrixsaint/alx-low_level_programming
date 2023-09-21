#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list.
 * @h: The linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
