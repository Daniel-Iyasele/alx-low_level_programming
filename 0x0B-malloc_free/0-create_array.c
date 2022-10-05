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
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		/*_putchar(ptr[i]);*/
		/*if (i < size)*/
			/*_putchar(' ');*/
		/*if (i % 10 == 0)*/
			/*_putchar('\n');*/
		i++;
	}
	return (ptr);
}
