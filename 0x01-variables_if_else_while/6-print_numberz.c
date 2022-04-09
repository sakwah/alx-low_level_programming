#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
