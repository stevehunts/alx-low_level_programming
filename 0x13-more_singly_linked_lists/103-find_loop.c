#include "lists.h"

/**
 * find_listint_loop - Finds the loop
 * @head: A pointer to the head of the listint_t list
 *
 * Return: if there is no loop - NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *here;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	here = (head->next)->next;

	while (here)
	{
		if (tortoise == here)
		{
			tortoise = head;

			while (tortoise != here)
			{
				tortoise = tortoise->next;
				here = here->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		here = (here->next)->next;
	}

	return (NULL);
}
