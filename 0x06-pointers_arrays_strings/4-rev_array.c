#include "main.h"

/**
 * reverse_array - function
 * @n: elements
 * @a: string
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int b;
	int x;

	for (b = n - 1; b >= n / 2; b--)
	{
	x = a[n - 1 - b];
	a[n - 1 - b] = a[b];
		a[b] = x;
	}
}
