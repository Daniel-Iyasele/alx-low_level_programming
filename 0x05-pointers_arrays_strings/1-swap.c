#include "main.h"
/**
 * swap_int - function to swap pointer variables in main
 * @a: first value to be swapped
 * @b: second value to be swapped
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
