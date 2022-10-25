#include "main.h"
#include <string.h>

/**
 *print_rev - function
 *Description: print string in reverse
 *@s: operand
 * Return: always 0 (success)
 */
void print_rev(char *s)
{
	int end;
	int x;

	end = strlen(s) - 1;
	for (x = end; x >= 0; x--)
	_putchar(s[x]);
	_putchar('\n');
}
