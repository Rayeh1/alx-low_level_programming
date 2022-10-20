#include "main.h"

/**
 *_isupper - function that for uppercase character
 *@x:
 *@c: character to test
 *Return: return 1 if uppercase, 0 if others
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	else
		{
			return (0);
		}
}
