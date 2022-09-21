#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int j, n, i;
	char ptr[50];

	i = 0;
	while (*(s  + i) != '\0')
	{
		ptr[i] = *(s + i);
		i++;
	}

	j = i - 1;
	n = 0;
	while (*(ptr + j) >= 0)
	{
		*(s + n) = ptr[j];
		j--;
		n++;
	}
}
