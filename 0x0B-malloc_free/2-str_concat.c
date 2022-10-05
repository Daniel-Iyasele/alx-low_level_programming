#include "main.h"
/**
 * str_concat - concatenates two strings using malloc
 * @s1: first string
 * @s2: second string to be concatenated
 *Return: a string using malloc pointer else null
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len_of_s1 = 0, len_of_s2 = 0, combined_len;
	char *ptr;

	while (s1 && s1[len_of_s1])
	{
		len_of_s1++;
	}
	while (s2 && s2[len_of_s2])
	{
		len_of_s2++;
	}
	combined_len = len_of_s1 + len_of_s2;
	ptr = malloc((combined_len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_of_s1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len_of_s2; j++)
	{
		ptr[len_of_s1 + j] = s2[j];
	}
	ptr[combined_len] = '\0';
	return (ptr);
}
