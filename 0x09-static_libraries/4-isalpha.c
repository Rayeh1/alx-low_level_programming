#include "main.h"

/**
 *_isalpha - determine whether alphabet
 *@c: operand function to check alphabet
 *Return: return 1 if alphabet, return 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
