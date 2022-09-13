#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i =  0;

	while (i <= 9)
	{
		int alpha = 'a' , last_alpha = 'z';

		while (alpha <= last_alpha)
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
