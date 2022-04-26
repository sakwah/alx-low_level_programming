#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurence of c
 * or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
