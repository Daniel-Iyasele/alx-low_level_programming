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

	i = 0;
	while (*(src + i))
	{
		*dest = *(src + i);
		i++;
		dest++;
		if (*(src + i) == '\0')
			*dest =*(dest + i) + '\0';
	}
	return (dest);
}
