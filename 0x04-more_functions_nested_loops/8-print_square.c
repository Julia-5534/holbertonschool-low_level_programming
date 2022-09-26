#include "main.h"

/**
 * print_square - prints a square, followed by new line
 * @size: size of square
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (row = size; row > 0; row--)
	{
		for (column = size; column > 0; column--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
