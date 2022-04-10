#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
