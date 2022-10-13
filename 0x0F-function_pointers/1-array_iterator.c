#include "function_pointers.h"
/**
 * array_iterator - prints the values of an array
 * @array: an array of five elements
 * @size: length of array
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
