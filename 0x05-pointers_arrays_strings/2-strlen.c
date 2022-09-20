#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: pointer to address of string to be counted
 *
 * Return: i which is the length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
