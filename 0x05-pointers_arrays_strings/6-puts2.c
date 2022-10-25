#include "main.h"
#include <string.h>

/**
 * puts2 - function
 * @str - operand
 * Return: void
 */
void puts2(char *str)
{
	int c;
	int end;
	
	end = strlen(str) - 1;
	for (c = 0; c <= end;)
	{
	if (c % 2 == 0)
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
