#include "main.h"

/**
 * _memset - function
 * @s: string
 * @b: character
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int vary;

	for (vary = 0; vary < n; vary++)
	{
		s[vary] = b;
	}
	return (s);
}
