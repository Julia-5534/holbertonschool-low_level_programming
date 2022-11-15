#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to new hash table, NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newHash = malloc(sizeof(hash_table_t));

	if (!newHash)
		return (NULL);

	if (size == 0)
		return (NULL);

	newHash->array = malloc(sizeof(hash_node_t *) * size);

	if (!newHash->array)
	{
		free(newHash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		newHash->array[i] = NULL;

	newHash->size = size;

	return (newHash);
}
