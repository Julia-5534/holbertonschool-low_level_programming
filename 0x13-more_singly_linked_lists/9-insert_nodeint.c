#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: list passed in
 * @idx: index of the list where new node should be added
 * @n: number to be added into new node
 * Return: the address of the new node, or NULL upon failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *toot = *head;
	listint_t *boopNode = malloc(sizeof(*newNode));
	unsigned int i = 0;

	if (!boopNode)
		return (NULL);

	boopNode->n = n;

	if (idx == 0)
	{
		boopNode->next = *head;
		*head = boopNode;
		return (boopNode);
	}

	while (toot)
	{
		if (i == idx - 1)
			break;
		i++;
		toot = toot->next;
	}

	if (i < idx - 1)
		return (NULL);

	boopNode->next = toot->next;
	toot->next = boopNode;

	return (boopNode);
}
