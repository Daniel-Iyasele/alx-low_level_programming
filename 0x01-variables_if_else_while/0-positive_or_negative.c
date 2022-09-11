#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
/*This program prints positive and negative numbers */
/**
 * main- entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/* return: always 0 */
	return (0);
}
