#include "main.h"

/**
 * more_numbers - prints 10 lines of numbers 1-14, followed by new line
 * Return: VOID
 */

void more_numbers(void)
{
	int i = 0, z = 0;

	for (i = 0; i < 10; i++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
				_putchar('1');
			_putchar((z % 10) + '0')
		}
		_putchar('\n');
	}
}
