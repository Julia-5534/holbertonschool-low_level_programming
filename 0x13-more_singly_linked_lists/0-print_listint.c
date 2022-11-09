#include "lists.h"

/**
 * print_listint - function that prints all elements of a "list_t" list.
 * @h: list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *toot = h;
	int nodes = 0;

	while (toot)
	{
		printf("%d\n", toot->n);
		toot = toot->next;
		nodes++;
	}

	return (nodes);
}
