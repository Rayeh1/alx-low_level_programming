#include "main.h"
#include <string.h>

/**
 * _strncat - function
 * @n: integer
 * @dest: string 2
 * @src: string 1
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
