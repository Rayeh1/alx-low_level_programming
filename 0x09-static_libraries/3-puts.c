#include "main.h"

/**
 * _puts - function
 *@str: string
 * return: always 0 (success)
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
	_putchar(str[c]);
	c++;
	}
	_putchar('\n');
}
