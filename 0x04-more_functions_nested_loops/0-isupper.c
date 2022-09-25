#include "main.h"
/**
 * _isupper - check if letter is uppercase
 * @c: The number to check
 * Return: 1 for uppercase, 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
