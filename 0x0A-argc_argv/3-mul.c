#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: numb
 * @argv: args
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	result = x * y;
	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
