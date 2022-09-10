#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main- entrypoint
 *
 * return: always 0
 */
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
		if (n == 0)
		{
			printf("%d is zero \n", n);
		}
		if (n < 0)
		{
			printf("%d is negative \n", n);
		}
		/*return: always zero */
	return (0);
}
