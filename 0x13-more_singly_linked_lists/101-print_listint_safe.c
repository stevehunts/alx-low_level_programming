#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t list safely (handling loops).
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t count = 0;
    int loop_found = 0;

    if (!head)
        exit(98);

    while (fast && fast->next && (!loop_found || slow != fast))
    {
        if (slow == fast && loop_found)
            break;
        if (!loop_found && fast == slow && count > 0)
            loop_found = 1;
        if (!loop_found || (loop_found && slow != fast))
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
        }
        slow = slow->next;
        if (!loop_found)
            fast = fast->next->next;
        else
            fast = fast->next;
    }

    if (loop_found)
        printf("-> [%p] %d\n", (void *)slow, slow->n);

    return count;
}

