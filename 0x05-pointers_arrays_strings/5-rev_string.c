#include "main.h"
#include <string.h>

/**
 * rev_string - reverse function
 * @s: operand
 * return: always 0 (success)
 */
void rev_string(char *s)
{
	char x;
	char end;

	end = strlen(s) - 1;
	for (x = end; x >= 0; x--)
		*s = s[x];
}
