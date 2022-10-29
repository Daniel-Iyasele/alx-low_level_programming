#include <stdio.h>
#include  <stdlib.h>
/*program prints three distinct number combination from 0-9 in which */
/**
 * main- entrypoint
 * Return: always 0
 */
int main(void)
{
	int j, first, i, last;
	int second = j = '9';

	for (first = '0'; first <= second; first++)
	{
		for (i = first + 1; i <= j; i++)
		{
			for (last = i + 1; last <= j; last++)
			{
				putchar(first);
				putchar(i);
				putchar(last);
				if (first == '7' && i == '8' && last == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
