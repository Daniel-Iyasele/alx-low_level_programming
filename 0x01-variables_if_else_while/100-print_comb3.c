#include <stdio.h>
#include  <stdlib.h>
/*program prints two distinct number combination from 0-9 in which */
/**
 * main- entrypoint
 * Return: always 0
 */
int main(void)
{
	int j, first, i;
	int second = j = '9';

	for (first = '0'; first <= second; first++)
	{
		for (i = first + 1; i <= j; i++)
		{
			putchar(first);
			putchar(i);
			if (first == '8' && i == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
