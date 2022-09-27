#include "main.h"
/**
 * _memcpy - funcion ha copies n byte of words from source
 * @dest: destination string
 * @src: source string
 * @n : length of byte of string to copy
 *
 * Return: dest pointer value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *beg_dest;

	beg_dest = dest;
	i = 0;
	while ((*(src + i) != '\0') && i < n)
	{
		*(beg_dest + i) = *(src + i);
		i++;
	}
	dest = beg_dest;
	return (dest);
}
