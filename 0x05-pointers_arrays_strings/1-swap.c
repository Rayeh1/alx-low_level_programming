#include "main.h"

/**
 *swap_int - function
 *@a: 1st integer
 *@b: 2nd integer
 *Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int var1;
	*a = &var1;
	*a = *b;
	*b = &var1;
}
