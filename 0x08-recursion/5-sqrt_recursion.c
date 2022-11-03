#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function
 * @n: integer
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt(n));
	}
}
