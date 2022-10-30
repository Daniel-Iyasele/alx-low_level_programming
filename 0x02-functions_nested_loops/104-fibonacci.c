#include <stdio.h>
#include <stdlib.h>
/* Program that prints the first 98 fibonacci series*/
/**
 * main - program entry point
 * Return: always 0
 */
int main(void)
{
	unsigned long first, second, next, i;

	first = 1;
	second = 2;
	printf("%lu, ", first);
	printf("%lu, ", second);
	for (i = 2; i < 98; i++)
	{
		next = first + second;
		printf("%lu", next);
		if (i < 97)
		{
			putchar(',');
			putchar(' ');
		}
		first = second;
		second = next;
	}
	putchar('\n');
	return (0);
}
