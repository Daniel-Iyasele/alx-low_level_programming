#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * program uses argc to multuply two numbers;
 * @argc: argument counter
 * @argv: array of arguments if any
 *
 * Return: always 0 otherwise error/ 1 if argc is empty.
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
