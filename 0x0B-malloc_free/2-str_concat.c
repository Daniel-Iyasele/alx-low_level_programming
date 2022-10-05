#include "main.h"
/**
 * str_concat - concatenates two strings using malloc
 * @s1: first string
 * @s2: second string to be concatenated
 *Return: a string using malloc pointer else null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len_of_s1, len_of_s2, combined_len;
	char *ptr;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		if (s1 == NULL)
		{
			*s1 = '\0';
			return (s1);
		}
	}
	len_of_s1 = i;
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		if (s2 == NULL)
		{
			*s2 = '\0'
			return (s2);
		}
	}
	len_of_s2 = j;
	combined_len = len_of_s1 + len_of_s2;
	ptr = malloc((combined_len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_of_s1; i++)
	{
		if (s1 == '\0')
		{
			ptr[i] = '\0';
			return (ptr);
		}
		ptr[i] = s1[i];
	}
	for (j = 0; j < len_of_s2; j++)
	{
		if (s2 == '\0')
		{
			ptr[i + j] = '\0';
			return (ptr);
		}
		ptr[i + j] = s2[j];
	}
	ptr[combined_len] = '\0';
	return (ptr);
}
