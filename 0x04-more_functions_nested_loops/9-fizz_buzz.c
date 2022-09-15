#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrypoint
 *
 * Author : @Daniel Iyasle @ alx
 * body: prints numbers from 1-100?
 * if number is a multiple of 3 replace with FiZZ?
 * if number is a multiple of 5 replace with Buzz?
 * if number is both a multiple of 3 & 5 replace with FizzBuzz
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
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
