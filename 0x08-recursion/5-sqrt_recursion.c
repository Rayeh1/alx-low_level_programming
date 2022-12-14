#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: integer
 * Return: void
 */
int _sqrt_recursion(int n)
{
	int ruu = 0;

	if (n < 0)
		return (-1);
	
	if (n == 1)
		return (1);

		return (sqr_root(n, ruu));
}
/**
 * sqr_root - root of
 * @base: numb to
 * @ruu: root test
 * Return: sqr root
 */
int sqr_root(int base, int ruu)
{
	if ((ruu * ruu) == base)
		return (ruu);

	if (ruu == base / 2)
		return (-1);

	return (sqr_root(base, ruu + 1));
}
