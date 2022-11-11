#include "lists.h"

/**
 * add_dnodeint_end - Adds node to end of doubly linked list
 * @head: double pointer to head of list
 * @n: integer value to be stored in new node
 * Return: address of new element, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
			return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}
