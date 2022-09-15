#include "main.h"
/**
 * print_triangle - function that prints a triangle using #
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = size - 1; j >= 0; j--)
		{
			if (i > j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
