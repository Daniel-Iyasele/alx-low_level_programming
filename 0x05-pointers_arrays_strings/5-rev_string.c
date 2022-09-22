#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int j, n, i;
	char *beg_ptr, *end_ptr, ch;

	i = 0;
	beg_ptr = s;
	end_ptr = s;
	while (*(s  + i) != '\0')
	{
		i++;
	}

	j = i - 1;
	for (i = 0; i < j; i++)
		end_ptr++;
	n = 0;
	while (n < (j / 2))
	{
		ch = *end_ptr;
		*end_ptr = *beg_ptr;
		*beg_ptr = ch;
		n++;
		end_ptr--;
		beg_ptr++;
	}
}
