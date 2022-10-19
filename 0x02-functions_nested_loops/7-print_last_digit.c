#include "main.h"

/**
 *_last_digit - print last digit of a number 
 *@n: operand to rep integer
 *Return: Return the last digit
 */
int print_last_digit(int n)
{
	int m;
	m=n%10;
	
	_putchar(m);
	return (m);
}
