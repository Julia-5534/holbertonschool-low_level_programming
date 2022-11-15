#include "hash_tables.h"

/**
 * key_index - the index of a key in a hash table
 * @key: key to retrieve index
 * @size: array size of the hash table
 * Return: calculated index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}
