#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data.
 * @head: A double pointer to the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
