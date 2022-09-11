#include <stdio.h>
#include <stdlib.h>
/* This program prints numbers less than 10 and >= 0 */
/**
 * main-entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	/* i is a variable that holds the value 0-9 */
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
