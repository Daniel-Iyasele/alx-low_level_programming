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
	int i, j, len_of_str;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		/* for loop to get length of src string*/
	}
	len_of_str = i;
	for (j = 0; j < len_of_str; j++)
	{
		*dest = *(src + j);
		dest++;
	}
	return (dest);
}
