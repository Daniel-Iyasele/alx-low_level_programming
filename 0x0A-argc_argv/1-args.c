#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * program prints the number of argument passed
 * @argc: argument(s) passed
 * @argv: array of arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	if (argc < 0)
		printf("%s", argv[i]);
	return (0);
}
