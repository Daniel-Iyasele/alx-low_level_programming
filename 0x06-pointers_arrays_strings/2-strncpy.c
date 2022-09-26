#include "main.h"
/**
 * _strncpy - function to copy source string dynamically
 * @dest: destination string
 * @src: source string
 * @n: length of source string
 *
 * Return: a pointer ch wwhich contains copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ch;

	ch = dest;
	i = 0;
	while ((*(src + i) != '\0') && i < n)
	{
		*(dest + i) = *(src + i);
		*(ch + i) = *(dest + i);
		i++;
	}
	dest[i] = '\0';
	return (ch);
}
