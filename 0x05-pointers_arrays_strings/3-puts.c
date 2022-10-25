#include "main.h"

/**
 * _puts - function
 *str: string 
 * return: always 0 (success)
 */
void _puts(char *str)
{
	char c;

	c = *str;
	_putchar(c);
	_putchar('\n');
}
