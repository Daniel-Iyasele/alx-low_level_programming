#include "main.h"
/**
 * print_most_numbers - function that skips?
 * 2 and 4 and prints other numbers from 0-9
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		_putchar(i);
	}
	_putchar('\n');
}
