#include "lists.h"

/**
 * add_node_end - add new node at the end of a list_t list.
 * @head: pointer to front of list
 * @str: string to add to new node
 * Return: address of new element, or NULL upon failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *boopNode = malloc(sizeof(list_t));
	list_t *toot = *head;

	if (!boopNode)
		return (NULL);

	boopNode->str = strdup(str);
	boopNode->len = strlen(str);
	boopNode->next = NULL;

	if (*head == NULL)
		*head = boopNode;
	else
	{
		while (toot->next)
			toot = toot->next;
			
		toot->next = boopNode;
	}

	return (boopNode);
}
