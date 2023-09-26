#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the start of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *temp;
	listint_t *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);
	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (slow)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				num++;
			}
			*h = NULL;
			return (num);
		}
	}
	slow = *h;
	while (slow)
	{
		temp = slow;
		slow = slow->next;
		free(temp);
		num++;
	}
	*h = NULL;
	return (num);
}
