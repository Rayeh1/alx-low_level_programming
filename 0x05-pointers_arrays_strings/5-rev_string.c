#include "main.h"
#include <string.h>

/**
 * rev_string - reverse function
 * @s: operand
 * return: always 0 (success)
 */
void rev_string(char *s)
{
	int i = 0, len, rev;
	char let;

	while (s[i] != '\0')
	{
	i++;
	}
	rev = i - 1;

	for (len = 0; rev >= 0 && len < rev; rev--, len++)
	{
	let = s[len];
	s[len] = s[rev];
	s[rev] = let;
	}
}
