#include "main.h"
/**
 * create_array - function to print char of array
 * @size: size of array
 * @c: character array to print
 *
 * Return: null if size = 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
		return (NULL);
	else 
	{
		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}
	return (ptr);
}
