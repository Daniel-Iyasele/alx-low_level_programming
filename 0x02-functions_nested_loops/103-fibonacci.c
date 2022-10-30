#include <stdio.h>
#include <stdlib.h>
/* Program that prints the first 50 fibonacci series*/
/**
 * main - program entry point
 * Return: always 0
 */
int main(void)
{
	unsigned long fib[32], i, sum = 2;
	unsigned long sentinel = 4000000;

	fib[0] = 1;
	fib[1] = 2;
	fib[2] = 3;
	for (i = 2; i <= 32; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if ((fib[i] % 2) == 0 && fib[i] <= sentinel)
			sum = sum + fib[i];
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
