#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: the number to be checked
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int a;

	a = (n * ((n > 0) - (n < 0)) % 10);
	_putchar(a + '0');
	return(a);
}
