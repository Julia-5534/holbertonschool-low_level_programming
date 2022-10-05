#include "main.h"

/**
 * _strstr - returns pointer to first of str
 * @haystack: pointer to string to scan
 * @needle: pointer to a str containing seq of char to mach
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *) (haystack));
	}

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;

		while (1)
			{
				if (*b == 0)
				{
					return ((char *) (haystack));
				}
				if (*a++ != *b++)
				{
					break;
				}
			}
			b = needle;
	}
	return ('\0');
}
