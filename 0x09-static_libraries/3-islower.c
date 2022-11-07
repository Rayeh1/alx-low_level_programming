#include "main.h"

/**
 *_islower - checks for lowercase characters in c function
 *@c: operand to check function
 *Return: Return 1 if c is lowercase, else return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
