#include "main.h"
/**
 * _strcpy - copies string from source to destination
 * @dest: destination string
 * @src: source string to br copied
 *
 * Return: des is returned to main
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *ch;

	ch = dest;
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		*(ch + i) = *(dest + i);
		i++;
	}
	dest[i] = '\0';
	return (ch);
}
