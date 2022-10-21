#include "main.h"

/**
 *print_most_numbers - prints numbbers from 0 to 9
 *_putchar - to print
 *Return: Always 0 (always)
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c >= '9'; c++)
		while (c % 2 == 0)
			_putchar(c);
			_putchar('\n');
}
