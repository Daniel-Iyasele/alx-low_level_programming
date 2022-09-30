#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point and also prints programs name.
 * @argc: number of command line arguments to main
 * @argv: arrayy of string argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == (argc - 1))
			printf("%s", argv[i]);
	}
	putchar('\n');
	return (0);
}
