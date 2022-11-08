#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: string
 * Return: void
 */
char *_strdup(char *str)
{
	int i;
	int x = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		c++;
	d = malloc(sizeof(char) * x + 1);

	if (d == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		d[i] = str[i];
	return (d);
}
