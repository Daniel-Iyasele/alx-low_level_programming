#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrypoint to access the program
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz");
			if (i < 100)
				putchar(' ');
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			if (i < 100)
				putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i < 100)
				putchar(' ');
		}
		else
		{
			printf("%d", i);
			if (i < 100)
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	/*Author : @Daniel Iyasle @ alx */
	/*body: prints numbers from 1-100?*/
	/*if number is a multiple of 3 replace with FiZZ?*/
	/*if number is a multiple of 5 replace with Buzz? */
	/*if number is both a multiple of 3 & 5 replace with FizzBuzz */
}
