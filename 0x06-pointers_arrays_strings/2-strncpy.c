#include "main.h"
#include <string.h>

/**
 * @n: integer
 * @dest: integer 1
 * @src:integer 2
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
