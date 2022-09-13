#include "main.h"
/* This program uses a function call to print the alphabet */
/**
 * print_alphabet - prints 'abcde...'
 */
void print_alphabet(void)
{
	int alpha = 'a';
	int last_alpha = 'z';
	/* alpha and last_alpha represent first and last alphabets respectively */

	while (alpha <= last_alpha)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
