#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int s, h, r;

	for (r = 0; r < size; r++)
	{
		for (s = (size - 1); s > r; s--)
		{
			_putchar(' ');
		}
		for (h = 0; h <= r; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
