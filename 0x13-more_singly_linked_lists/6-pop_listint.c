#include "lists.h"

/**
 * pop_listint - deletes the head node of a "listint_t" linked list
 * @head: input list
 * Return: head node's n, or 0 for empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *toot = *head;
	int info;

	if (!(*head))
		return (0);

	info = toot->n;
	*head = (*head)->next;
	free(toot);

	return (info);
}
