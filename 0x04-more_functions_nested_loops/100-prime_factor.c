#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: void
 */
int main(void)
{
	long int n = 612852475143, div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
