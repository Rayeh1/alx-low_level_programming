#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function
 * @n: operand
 * return: void
 */
void print_array(int *a, int n)
{
	int x;
	x = 0;
	if (x < n - 1)
	{
	printf("%d, ", a[x]);
	x++;
	}
	else
	{
	printf("%d", a[x]);
	}
}

