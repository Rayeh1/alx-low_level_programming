#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function
 * @n: operand
 * @a: 2nd operand
 * return: void
 */
void print_array(int *a, int n)
{
	int x;
	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
		{
		printf("%d, ", a[x]);
		}
		else
		{
		printf("%d", a[x]);
		}
	}
}
