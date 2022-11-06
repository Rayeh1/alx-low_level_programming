#include <stdio.h>
#include <stdlib.h>

/**
 *main - function
 *@i: array
 *@argc: number
 *@argv: args
 *Return: void
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
