/**
 * powerto - calc a to the power b
 * @a: number
 * @b: power
 * Return: answer
 */

unsigned int powerto(unsigned int a, unsigned int b)
{
	unsigned int number = a, i = 1;

	if (b == 0)
		return (1);

	while (i < b)
	{
		number *= a;
		i++;
	}

	return (number);
}
