#include "main.h"
/**
 * _strcat - function to concatenate two strings
 * @dest: first string
 * @src: second string to append to dest
 *
 * Return: ch(concatenated string) is returned
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len_of_dest, len_of_src;
	char *ch1, *beg_dest, *beg_src;

	beg_dest = dest;
	beg_src = src;
	ch1 = dest;
	i = 0;
	while (*(dest + i) != '\0')
	{
		*(beg_dest + i) = *(dest + i);
		i++;
	}
	len_of_dest = i - 1;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(beg_src + j) = *(src + j);
		j++;
	}
	len_of_src = j - 1;
	for (i = 0; i <= len_of_dest; i++)
	{
		*(ch1 + i) = *(beg_dest + i);
	}
	for (j = 0; j <= len_of_src; j++)
	{
		*(ch1 + i + j) = *(src + j);
	}
	src = beg_src;
	dest = ch1;
	return (ch1);
}
