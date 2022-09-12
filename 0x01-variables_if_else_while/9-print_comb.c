#include <stdio.h>
#include <stdlib.h>
/**
 * main-entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	int i = '0', last = '9';

	while (i <= last)
	{
		putchar(i);
		if (i < last)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
