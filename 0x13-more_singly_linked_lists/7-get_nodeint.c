#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a "listint_t" linked list.
 * @head: list to search
 * @index: element to find
 * Return: nth node of the list, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *toot = head;
	unsigned int i = 0;

	while (toot)
	{
		if (i == index)
			return (toot);
		toot = toot->next;
		i++;
	}

	return (NULL);
}
