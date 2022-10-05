#include "main.h"

/**
 * _memcpy - copies string to dest
 * @n: given value of index
 * @src: given string to copy
 * @dest: given dest for string
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
