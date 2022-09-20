#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string input to be reversed
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = i - 1;
	while (*(s + j) > 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
