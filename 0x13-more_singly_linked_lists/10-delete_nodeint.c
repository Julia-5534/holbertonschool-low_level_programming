#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index "index" of a "listint_t"
 * @head: input list
 * @index: index of node to delete
 * Return: 1 upon success, -1 upon failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *toot = *head;
	listint_t *delNode;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		delNode = *head;
		*head = (*head)->next;
		free(delNode);

		return (1);
	}

	while (toot && index != 0)
	{
		if (i == index - 1)
			break;
		toot = toot->next;
		i++;
	}

	if (!toot)
		return (-1);

	delNode = toot->next;
	toot->next = toot->next->next;
	free(delNode);

	return (1);
}
