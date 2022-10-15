#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 *main - prints the alphabet in lowercase, except q and e
 *
 *Challenge: You can only use the putchar twice
 *
 *Return: 0 if result is as expected otherwise !0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
