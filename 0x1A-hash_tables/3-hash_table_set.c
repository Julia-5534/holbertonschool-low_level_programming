#include "hash_tables.h"

/**
 * hash_table_set - creates a new node in a hash table
 * @ht: the hash table
 * @key: the key used to index the new node
 * @value: the value to be copied into the new node
 * Return: 1 on success, 0 on error
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
