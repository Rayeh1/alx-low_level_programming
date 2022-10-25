#include "main.h"

/**
 * _puts - function
 *@str: string
 *@c: index
 * return: always 0 (success)
 */
void _puts(char *str)
{
	int c;

	while (str[c] != 0)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
}
