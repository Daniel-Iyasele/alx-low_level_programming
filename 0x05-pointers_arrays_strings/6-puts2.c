#include "main.h"
/**
 * puts2 - checks if a character is divisible by 2
 * @str:characters to be checked
 */
void puts2(char *str)
{
	char ch, *beg_ptr;
	int i;

	beg_ptr = &str[0];
	for (i = 0; *(str + i) != '\0'; i = i + 2)
	{
		ch = *(beg_ptr + i);
		_putchar(ch);
	}
	_putchar('\n');
}
