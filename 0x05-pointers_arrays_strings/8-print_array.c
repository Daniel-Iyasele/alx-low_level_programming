#include "main.h"
/**
 * print_array - prints array elements
 * @a: pointer to array address.
 * @n: n is the length of array or number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
