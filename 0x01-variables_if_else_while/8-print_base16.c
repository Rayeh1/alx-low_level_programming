#include<stdio.h>

/**
 *main - prints the lowercase alphabet in reverse,
 *Return: 0 if result is as expected else !0
 */
int main(void)
{
	char a;
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	}
	putchar('\n');
	return (0);
}
