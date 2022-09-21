#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int j, n, i;
	/*char *ptr = s;*/
	char rev[10];

	i = 0;
	while (*(s  + i) != '\0')
	{
		*(rev + i) = *(s + i);
		i++;
	}

	j = i - 1;
	n = 0;
	while (*(rev + j) > 0)
	{
		*(s + n) = *(rev + j);
		j--;
		n++;
	}
}
