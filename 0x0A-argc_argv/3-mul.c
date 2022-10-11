#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 Success; 1 otherwise.
 */

int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	/* mulitply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
