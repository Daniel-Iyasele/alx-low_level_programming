#include "main.h"
/**
 * puts_half - function that returns the other half of a string.
 * @str: inputted string from main function
 */
void puts_half(char *str)
{
	int i, len_of_str, divide;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	len_of_str = i;
	if (len_of_str % 2 != 0)
	{
		divide = (len_of_str - 1) / 2;
		for (i = divide; divide < len_of_str; divide++)
		{
			_putchar(*(str + divide));
		}
	}
	else
	{
		divide = len_of_str / 2;
		for (i = divide; divide < len_of_str; divide++)
		{
			_putchar(*(str + divide));
		}
	}
	_putchar('\n');
}
