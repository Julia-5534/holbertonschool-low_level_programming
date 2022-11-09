#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a "listint_t" list.
 * @head: list passed in
 * Return: integer sum, or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *toot = head;
	int total = 0;

	while (toot)
	{
		total += toot->n;
		toot = toot->next;
	}

	return (total);
}
