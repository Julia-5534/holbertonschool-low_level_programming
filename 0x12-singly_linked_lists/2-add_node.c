#include "lists.h"

/**
 * add_node - add node to beginning of linked list
 * @head: linked list
 * @str: data for new node
 * Return: pointer to list, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *boopNode;

	boopNode = malloc(sizeof(list_t));

	if (!boopNode)
	{
		free(boopNode);
		return (NULL);
	}

	boopNode->next = *head;
	*head = boopNode;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = boopNode->next;

	return (*head);
}
