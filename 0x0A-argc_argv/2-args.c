#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * program prints the values of argv
 * @argc: arguments counter
 * @argv: array for arguments
 *
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
