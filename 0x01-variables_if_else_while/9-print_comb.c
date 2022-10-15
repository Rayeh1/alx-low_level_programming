#include<stdio.h>

/**
 *main - prints all possible combinations of single-digit numbers
 *Return: 0 if result is as expected else !0
 */
int main(void)
{
	int asd;

	for (asd = '0'; asd <= '9'; asd++)
	{
		putchar(asd);
		if (asd != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
