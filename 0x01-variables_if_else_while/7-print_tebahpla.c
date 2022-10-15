#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse,
 *Return: 0 if result is as expected else !0
 */
int main(void)
{
	int rl;

	for (rl = 'z'; rl >= 'a'; rl--)
	{
		putchar(rl);
	}
	putchar('\n');
	return (0);
}
