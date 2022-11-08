#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++);
		return (len);
}

/**
 * add_node - add node to beginning of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *boop_node; /* create new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /*check if strdup malloc errored */
		return (NULL);

	boop_node = malloc(sizeof(list_t)); /* malloc for new node */
	
	if (boop_node == NULL)
		return (NULL);

	boop_node->str = strdup(str); /* set node values */
	boop_node->len = _strlen(str);

	if (head == NULL) /* set what new node points to first */
		boop_node->next = NULL;
	
	else
		boop_node->next = *head;
											*head = boop_node; /* set head to point to new node */

	return (boop_node);
}
