#include <stdio.h>
#include <stdlib.h>
/* This program prints figures 0-9 using ASCII coddes */
/**
 * main-entrypoint
 *
 * Return: always 0
 */
int main(void)
{
	int first_no = '0', last_no = '9';

	while (first_no <= last_no)
	{
		putchar(first_no);
		first_no++;
	}
	putchar('\n');
	return (0);
}
