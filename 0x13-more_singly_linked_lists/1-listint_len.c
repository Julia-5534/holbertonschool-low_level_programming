#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked "listint_t" list
 * @h: input list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *toot = h;
	int nodes = 0;

	while (toot)
	{
		nodes++;
		toot = toot->next;
	}

	return (nodes);
}
