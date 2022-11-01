#include "main.h"

/**
 * _memcpy - funtion
 * @dest: str1
 * @src: str2
 * @n: integ
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int copym;

	for (copym = 0; copym < n; copym)
	{
	dest[copym] = src[copym];

	return (dest);
}
