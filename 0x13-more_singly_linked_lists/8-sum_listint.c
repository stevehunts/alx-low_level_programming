#include "lists.h"

/**
 * sum_listint - Returns the sum
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n) of the list.
 *         If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

