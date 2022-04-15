#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int c, r;

		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
