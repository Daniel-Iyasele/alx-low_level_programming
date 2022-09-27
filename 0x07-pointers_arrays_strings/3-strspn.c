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
	int i, j, counter, flag;

	counter = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		flag = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
		return (counter);
		}
	}
	return (0);
}
