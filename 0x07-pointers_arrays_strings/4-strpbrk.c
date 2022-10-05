#include "main.h"
#include "_strchr.c"

/**
 * _strpbrk - scan to find first char in str matching in str accept
 * @s: null-terminated string to scan
 * @accept: null-terminated string
 * Return: \0 - return to null
 */

char *_strpbrk(char *s, char *accept)
{
	if ((*s == '\0') || (*accept == '\0'))
		return ('\0');

	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
