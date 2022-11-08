#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function
 * @c: character
 * @size: sizeof
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size < 0)
		return (NULL);
	d = malloc(size * (sizeof(char)));

	if (d == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		d[i] = c;

	return (d);
}
