#include "main.h"
/**
 * _strncat - function to concatenate string using diff lenth size for src
 * @dest: destinattion string
 * @src: source string
 * @n: length of source string
 *
 * Return: a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len_of_dest, len_of_src;
	char *ch, *beg_dest, *beg_src;

	ch = dest;
	beg_dest = dest;
	beg_src = src;
	i = 0;
	while (*(dest + i) != '\0')
	{
		*(beg_dest + i) = *(dest + i);
		i++;
	}
	len_of_dest =  i;
	j = 0;
	while (j < n && (*(src + j) != '\0'))
	{
		*(beg_src + j) = *(src + j);
		j++;
	}
	len_of_src = j;
	for (i = 0; i < len_of_dest; i++)
	{
		*(ch + i) = *(beg_dest + i);
	}
	for (j = 0; j < len_of_src; j++)
	{
		*(ch + i + j) = *(src + j);
	}
	dest = ch;
	src = beg_src;
	return (ch);
}
