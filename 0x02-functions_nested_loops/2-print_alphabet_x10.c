#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
