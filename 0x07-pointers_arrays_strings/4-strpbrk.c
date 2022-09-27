#include "main.h"
/**
 * _strpbrk - function t0 locate first occurence of a letter in a string
 * @s: destination string
 * @accept: source string
 *
 * Return: pointer s to main
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
