#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point
 *
 *Description: and that piece of art is useful
 *
 *Return: Return 1 if result is as expected else 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
