#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i > n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else if (i != (n - 1))
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
