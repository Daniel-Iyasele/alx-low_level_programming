#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/* Program to print alphabet in lowercase */
/**
 * main- entrypoint
 *
 *Return:always 0
 */
int main(void)
{
	/**
	 * Variable alpha and alpha_C rep small and capital  alphabets respectively
	 * last_alpha and last_C rep last lowercase and uppercase alphabets
	 */
	char alpha = 'a', alpha_C = 'A';
	char last_alpha = 'z', last_C = 'Z';

	while (alpha <= last_alpha)
	{
		putchar(alpha);
		alpha++;
	}
	while (alpha_C <= last_C)
	{
		putchar(alpha_C);
		alpha_C++;
	}
	putchar('\n');
	return (0);
}
