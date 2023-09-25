#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes = 0;
    const listint_t *slow = head, *fast = head;

    if (head == NULL)
        exit(98);

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                slow = slow->next;
                nodes++;
            }
            printf("[%p] %d\n", (void *)slow, slow->n);
            nodes++;
            return (nodes);
        }
    }

    slow = head;
    while (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        nodes++;
    }

    return (nodes);
}