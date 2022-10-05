#include "main.h"
/**
 * str_concat - concatenates two strings using malloc
 * @s1: first string
 * @s2: second string to be concatenated
 *
 * Return: a string using malloc pointer else null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len_of_s1, len_of_s2, combined_len;
	/* i,j are the indices for string s1 & s2*/
	/* combined_len is the sum of length of s1 & s2*/
	char *ptr;

	/*if (s1 == NULL)*//*if stament to handle null string */
	/*{*/
		/**s1 = "";*/
	/*}*/
	/*if (s2 == NULL)*/
		/*s2 = "";*/
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		if (s1 == NULL)
			return ("");
	}
	len_of_s1 = i;
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		if (s2 == NULL)
			return ("");
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
		ptr[i] = s1[i];
	}
	for (j = 0; j < len_of_s2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[combined_len] = '\0';
	return (ptr);
}
