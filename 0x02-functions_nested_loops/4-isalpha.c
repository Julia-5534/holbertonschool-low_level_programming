#include "main.h"
/**
 * int _isalpha
 * Description: checks if alpha or not
 * Return: (1) if c is a letter, else return (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
