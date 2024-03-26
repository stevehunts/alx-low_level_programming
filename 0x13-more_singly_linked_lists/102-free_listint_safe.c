#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely, even with loops.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	listint_t *current = *h;
	listint_t *fast = *h, *slow = *h;

	if (!h || !*h)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			/* Break the loop by setting the next of the last node to NULL */
			while (slow != fast->next)
			{
				fast = fast->next;
			}
			fast->next = NULL; /* Break the loop */
			break;
		}
	}

	/* Now free the nodes */
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		count++;
	}

	*h = NULL; /* Set the head to NULL */
	return (count);
}

