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
	if (y >= 0)
	{
		return (pow(x,y));
	}
	else
	{
		return (-1);
	}
}
