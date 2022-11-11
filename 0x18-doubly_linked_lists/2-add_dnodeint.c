#include "lists.h"

/**
 * add_dnodeint - Adds node at beginning of doubly linked list
 * @head: double pointer to head of list
 * @n: integer value to be stored in new node
 * Return: Address of new element, or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
