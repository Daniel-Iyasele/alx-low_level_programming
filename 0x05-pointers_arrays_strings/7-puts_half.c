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
	if ((len_of_str % 2) == 1)
	{
		index = (len_of_str - 1) / 2;
		for (i = index; i < len_of_str; i++)
		{
			_putchar(*(str + i));
		}
	}
	else if ((len_of_str % 2) == 0)
	{
		index = len_of_str / 2;
		while (*(str + index) != '\0')
		{
			_putchar(*(str + index));
			index++;
		}
	}
	_putchar('\n');
}
