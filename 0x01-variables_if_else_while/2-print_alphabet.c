#include <stdio.h>
#include <stdlib.h>
/* Program to print alphabet in lowercase */
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
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
