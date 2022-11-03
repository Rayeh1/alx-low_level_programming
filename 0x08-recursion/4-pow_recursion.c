#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function
 * @x: int 1
 * @y: int 2
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	int a;

	a = pow(x,y);
	if (y >= 0)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}
