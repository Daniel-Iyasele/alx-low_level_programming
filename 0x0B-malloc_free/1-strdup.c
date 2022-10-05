#include "main.h"
/**
 * _strdup - returns a string from main
 * @str: string to be returned
 *
 * Return: null if str is null otherwise str
 */

char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	len = i;
	ptr = malloc((len + 1) * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
