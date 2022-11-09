#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a "listint_t" list.
 * @head: pointer to input list
 * @n: new node integer value
 * Return: address of new element, or "NULL" if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *toot = *head;
	listint_t *boopNode = malloc(sizeof(*boopNode));

	if (!boopNode)
		return (NULL);

	boopNode->n = n;
	boopNode->next = toot;
	*head = boopNode;

	return (boopNode);
}
