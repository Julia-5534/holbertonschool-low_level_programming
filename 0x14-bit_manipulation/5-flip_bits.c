#include "main.h"

/**
 * flip_bits - dets num of bits needed to conv n to m
 * @n: uli arg in base 10 (number 1)
 * @m: uli arg in base 10 (number 2)
 * Return: tilda count needed to perform conv
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int booper = 0, tooter = 0;

	tooter = n ^ m;
	while (tooter)
	{
		if (tooter & 1)
		{
			booper++;
		}
		tooter >>= 1;
	}
	return (booper);
}
