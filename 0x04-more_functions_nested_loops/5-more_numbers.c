#include "main.h"

/**
 * more_numbers - prints 10 lines of numbers 1-14, followed by new line
 * Return: VOID
 */

void more_numbers(void)
{
	int a = 0, b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar((b % 10) + '0')
		}
		_putchar('\n');
	}
}
