#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return (0): Always
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
