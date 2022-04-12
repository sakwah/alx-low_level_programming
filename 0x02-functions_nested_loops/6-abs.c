#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
