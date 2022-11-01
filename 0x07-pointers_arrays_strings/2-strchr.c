#include "main.h"

/**
 * _strchr - function
 * @s: string
 * @c: charact
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int arr;

	for (arr = 0; s[arr] >= '\0'; arr++)
	{
		if (s[arr] == c)
			return (s + arr);
	}
	return ('\0');
}
