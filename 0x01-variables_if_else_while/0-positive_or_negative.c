#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 *main - entrypoint
 *
 *Return: always 0(success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;
	/*your code goes here*/
		if (n > 0)
		{
			printf("%d is positive \n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero \n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative \n", n);
		}
		/*return: always zero */
	return (0);
}
