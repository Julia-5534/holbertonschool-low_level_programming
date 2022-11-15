#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add to
 * @key: key to be added
 * @value: value to be added
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode, *current;

	if (!ht || !key || strcmp(key, "\0") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	if (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			newNode->next = current;
			ht->array[idx] = newNode;
			return (1);
		}
		while (current->next)
		{
			if (strcmp(current->next->key, key) == 0)
			{
				newNode->next = current->next->next;
				free(current->next->key), free(current->next->value), free(current->next);
				current->next = newNode;
				return (1);
			}
			current = current->next;
		}
		newNode->next = ht->array[idx];
		ht->array[idx] = newNode;
		return (1);
	}
	ht->array[idx] = newNode;
	return (1);
}
