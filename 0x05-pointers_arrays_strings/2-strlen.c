#include "main.h"

/**
 * _strlen - function
 * @s: variable
 * Return: always 0 (success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
