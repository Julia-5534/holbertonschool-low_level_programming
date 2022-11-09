#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a "listint_t" list.
 * @head: pointer to list
 * @n: integer to store in new node.
 * Return: address of new element, or "NULL" upon failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *toot = *head;
	listint_t *boopNode = malloc(sizeof(*boopNode));

	if (!boopNode)
		return (NULL);

	boopNode->n = n;
	boopNode->next = NULL;

	if (*head == NULL)
	{
		*head = boopNode;
		return (boopNode);
	}

	while (toot->next)
		toot = toot->next;

	toot->next = boopNode;

	return (boopNode);
}
