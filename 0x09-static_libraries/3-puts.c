#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @c: string
 * Return: Success
 */

void _puts(char c)
{
	return (write(1, &c, 1));
}
