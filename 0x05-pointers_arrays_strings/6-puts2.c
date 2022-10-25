#include "main.h"
#include <string.h>

/**
 * puts2 - function
 * @str - operand
 * Return: void
 */
void puts2(char *str)
{
	char c;
	char end;
	
	end = strlen(str) - 1;
	for (c = str[0]; c <= end;)
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
