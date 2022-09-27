#include "main.h"
/**
 * _memset - funcion to copy byte to memory
 * @s: final string
 * @b: string to copy
 * @n: length of string to copy
 *
 * Return: copied string is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*(s + i) && i < n)
	{
		*(s + i) = b;
		_putchar(*(s + i));
		if ((i % 10 == 0) && i < n)
		{
			_putchar('\n');
		}
		else if (i < n)
			_putchar(' ');
		i++;
	}
	return (s);
}
