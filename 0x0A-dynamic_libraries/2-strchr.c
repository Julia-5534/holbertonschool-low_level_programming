#include "main.h"

/**
 * _strchr - prototype for function
 *@s: an int
 *@c: an int
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (0);
}
