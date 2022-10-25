#include "main.h"
#include<unistd.h>

/**
 * _puts - function
 *str: string 
 * return: always 0 (success)
 */
void _puts(char *str)
{
	char c;
	c = *str;
	write(1, &c, 8);
}
