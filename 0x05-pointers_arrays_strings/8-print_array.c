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
	for (x = 0; x <= n;)
	{
	printf("%d, ", a[x]);
	}
}

