#include "main.h"

/**
 * jack_bauer: theme song
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23; x++)
		for (y = 0; y <= 59; y++)
		{
		_putchar(x + '0');
		_putchar(':');
		_putchar(y + '0');
		}
	_putchar('\n');
}
