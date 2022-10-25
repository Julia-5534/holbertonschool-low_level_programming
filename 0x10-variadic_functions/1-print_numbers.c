#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: delimiter
 * @n: arguments in list
 * Return: (VOID)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if ((i < (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
