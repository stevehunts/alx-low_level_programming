#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A double pointer to the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next; /* Store next node */
		current->next = prev; /* Reverse current node's pointer */
		prev = current; /* Move pointers one position ahead. */
		current = next;
	}
	*head = prev;
	return (*head);
}

