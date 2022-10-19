#include "main.h"

/**
 *print_sign - print the sign of a number
 *@n: character to test function against
 *Return: Return 1 and positive sign if number is greater than zero,
 *-1 is less than zero
 *and zero if zero
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
	_putchar('\n');
}
