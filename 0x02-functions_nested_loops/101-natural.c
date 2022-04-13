#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	unsigned long int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			sum = sum + n;
		}
	}
	printf("%lu", sum);
	return (0);
}
