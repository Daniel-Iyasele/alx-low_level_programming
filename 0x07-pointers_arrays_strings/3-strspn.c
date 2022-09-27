#include "main.h"
/**
 * _strspn - function to get the length of a substring
 * @s: main string
 * @accept: substring
 *
 * Return: counter i.e length of byte of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter;

	counter = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				if (*(s + i) == *(s + i - 1))
					s++;
				else
					counter = counter + 1;
				break;
			}
		}
	}
	if (*(s + i) == *(accept + j))
	{
		return (counter);
	}
	else
		return ('\0');
}
