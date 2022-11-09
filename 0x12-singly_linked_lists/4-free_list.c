#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list to free
 */

void free_list(list_t *head)
{
	list_t *toot;

	while (head)
	{
		toot = head;
		head = head->next;
		free(toot->str);
		/*free(toot->next);*/
		free(toot);
	}

	free(head);
}
