#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
