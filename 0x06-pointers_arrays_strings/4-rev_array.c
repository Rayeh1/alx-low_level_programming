#include "main.h"

/**
 * reverse_array - function
 * @n: elements
 * @a: string
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int *i;
	int x;
	int y;

	for (x = n - 1, y = 0; x >= 0; x--, y++)
		i[y] = a[x];
	for (x = 0; x < n; x++)
		a[x] = i[x];
}
