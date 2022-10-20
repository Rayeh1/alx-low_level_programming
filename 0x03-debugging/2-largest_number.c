#include "main.h"

/*
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c) || (a > c && c > b)
	{
		largest = a;
		printf("largest =");
		putchar(a);
	}
	else if (b > a && a > c) || (b > c && c > a)
	{
		largest = b;
		printf("largest =");
		putchar(b);
	}
	else
	{
		largest = c;
		printf("largest =");
		putchar(c);
	}

	return (largest);
}
