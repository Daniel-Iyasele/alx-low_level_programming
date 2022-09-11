#include <stdio.h>
#include <stdlib.h>
/* This program prints lowercase alphabets except q & e */
/**
 * main- entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	char alpha = 'a';
	char last_alpha = 'z';

	while (alpha <= last_alpha)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha = alpha + 1;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
