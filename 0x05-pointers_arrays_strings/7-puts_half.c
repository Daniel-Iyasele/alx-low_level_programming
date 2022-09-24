#include "main.h"
/**
 * puts_half - function that returns the other half of a string.
 * @str: inputted string from main function
 */
void puts_half(char *str)
{
	int i, len_of_str, index;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	len_of_str = i;
	if (len_of_str % 2 != 0)
	{
		index = (len_of_str - 1) / 2;
		for (i = index + 1; index < len_of_str; index++)
		{
			_putchar(*(str + index));
		}
	}
	else
	{
		index = len_of_str / 2;
		for (i = index; index < len_of_str; index++)
		{
			_putchar(*(str + index));
		}
	}
	_putchar('\n');
}
