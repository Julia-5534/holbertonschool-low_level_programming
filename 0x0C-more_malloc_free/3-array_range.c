#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min range of values stored
 * @max: max range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int num_nums = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * num_elements);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < num_elements; i++, min++)
		ptr[i] = min;

	return (ptr);
}
