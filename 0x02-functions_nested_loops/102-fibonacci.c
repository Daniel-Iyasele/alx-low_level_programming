#include <stdio.h>
#include <stdlib.h>
/* Program that prints the first 50 fibonacci series*/
/**
 * main - program entry point
 * Return: always 0
 */
int main(void)
{
	unsigned long fib[50], i;

	fib[0] = 1;
	fib[1] = 2;
	printf("%lu, ", fib[0]);
	printf("%lu, ", fib[1]);
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%lu", fib[i]);
		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
