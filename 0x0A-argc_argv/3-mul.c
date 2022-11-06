#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: numb
 * @argv: args
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
		printf("%d\n", result);
	}
	return (0);
}
