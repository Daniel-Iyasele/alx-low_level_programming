#include "main.h"
/**
 * _puts_recursion - functtion to print a string.
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
