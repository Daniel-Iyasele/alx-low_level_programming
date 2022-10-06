#include "main.h"
/**
 * malloc_checked - creates memory for variables from main function
 * @b: variable from main
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b * sizeof(b));
	if (ptr == NULL)
	{
		return (98);
	}
}
