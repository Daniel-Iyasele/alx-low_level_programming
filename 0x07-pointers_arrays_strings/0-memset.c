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
	char *beg_s;

	beg_s = s;
	i = 0;
	while (b && i < n)
	{
		*(beg_s + i) = b;
		*(s + i) = *(beg_s + i);
		i++;
	}
	return (s);
}
