#include "main.h"

/**
 *  * _memset - copies val of b into first n chars pointed by s
 *   * @s: pointer to dest
 *    * @b: value to fill
 *     * @n: number of bytes to fill
 *      *
 *       * Return: s
 *        */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char) b;
	}
	return (s);
}
