#include "main.h"

/**
 *_isdigit - function that checks digits
 *@c: operand to check digit
 *Return: return 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
