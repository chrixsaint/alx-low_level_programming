#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A double pointer to the head of the listint_t list.
 * @n: The integer to be included in the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;/* used in step 5*/

	/* allocate node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/* put in the data  */
	new->n = n;
	new->next = NULL;
	/* If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/* Change the next of last node */
	last->next = new;
	return (new);
}
