#include <stdio.h>
#include <stdlib.h>
/* Program prints the hexadecimal digits */
/**
 * main- entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	int first;

	for (first = 0; first <= 15; first++)
	{
		if (first > 9)
		{
			putchar(('a' + first - 10));
		}
		else
			putchar((first + '0'));
	}
	putchar('\n');
	return (0);
}
