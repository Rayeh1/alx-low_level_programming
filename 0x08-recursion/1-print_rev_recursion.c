#include "main.h"

/**
 * _print_rev_recursion
 * @s: string 1
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s++);
	else
		return;
	_putchar(*s);
}
