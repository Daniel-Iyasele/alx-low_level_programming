#include "main.h"
/**
 * _strchr - checks for the occurrence of acharacter in a string
 * @s: pointer to string
 * @c: character to be checked
 *
 * Return: a string starting with the character
 */
char *_strchr(char *s, char c)
{
	int i;
	char ch;

	i = 0;
	while (*(s + i))
	{
		ch = *(s + i);
		if (ch == c)
		{
			break;
		}
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
