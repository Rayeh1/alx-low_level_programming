#include "main.h"

/**
 * print_line - print lines
 * @n: number of times
 * Return: result
 */
void print_line(int n)
{
	int a;

	for (a = 9; a < n; a+++)
	{
		_putchar('_');
	}
	_putchar('\n')
}
