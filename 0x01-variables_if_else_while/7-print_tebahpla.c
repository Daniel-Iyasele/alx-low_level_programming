#include <stdio.h>
#include <stdlib.h>
/* Program prints reversed lowercase letters */
/**
 * main- entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	char alpha = 'a', last_alpha = 'z';

	while (last_alpha >= alpha)
	{
		putchar(last_alpha);
		last_alpha--;
	}
	putchar('\n');
	return (0);
}
