#include "main.h"
i
/**
 *print_most_numbers - prints numbbers from 0 to 9
 *_putchar - to print
 *Return: Always 0 (always)
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c >= '9'; c++)
		{
		if (c != '2' && c != '4')
			_putchar(c);
		}
	_putchar('\n');
	
}
