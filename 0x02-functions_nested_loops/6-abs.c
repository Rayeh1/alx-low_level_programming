#include "main.h"

/**
 *_abs - a function that computes the absolute value of an integer
 *print_sign - print the sign of a number
 *@n: character to test function against
 *Return: Return 1 and positive sign if number is greater than zero
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
	_putchar('\n');
}
