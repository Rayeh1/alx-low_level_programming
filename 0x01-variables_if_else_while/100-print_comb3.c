#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 *Return: 0 if result is as expected else !0
 */
int main(void)
{
	int tc, nz;

	for (tc = '0'; tc <= '9'; tc++)
	{
		for (nz = '0'; nz <= '9'; nz++)
		{
			if (tc < nz)
			{
				putchar(tc);
				putchar(nz);

				if (tc != '8' || (tc == '8' && nz != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
