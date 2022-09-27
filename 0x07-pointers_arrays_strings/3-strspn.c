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

	i = 0;
	counter = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				if (*(s + i) == *(s + i - 1))
					counter = counter - 1;
				else
					counter = counter + 1;
				break;
			}
			j++;
		}
		i++;
	}
	return (counter);
}
