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
	if (y < 0)
	{
		return (-1);
	}
	else if (y = 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1);
}
