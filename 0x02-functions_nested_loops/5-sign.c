#include "main.h"

/**
 *print_sign - print sign of a number
 *@n: operand to print sign
 *Return: Return 1 if positive, else if return 0 if zero, else -0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
