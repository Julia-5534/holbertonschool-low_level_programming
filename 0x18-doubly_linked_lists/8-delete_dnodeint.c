#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a given node
 * @head: double pointer to head of linked list
 * @index: node to be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *toot = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; toot != NULL && i < index; i++)
		toot = toot->next;

	if (toot == NULL)
		return (-1);

	if (*head == toot)
		*head = toot->next;

	if (toot->next != NULL)
		toot->next->prev = toot->prev;

	if (toot->prev != NULL)
		toot->prev->next = toot->next;

	free(toot);

	return (1);
}
