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
	int first_hex_digit = 0x30, last_hex_digit = 0xF;

	while (first_hex_digit <= last_hex_digit)
	{
		putchar(first_hex_digit);
		first_hex_digit++;
	}
	putchar('\n');
	return (0);
}
