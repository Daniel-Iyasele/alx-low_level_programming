#include "main.h"
/**
 * print_square - finds the square of its input and uses # to print it
 * @size: determines the size of the sqaure value
 */
void print_square(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int n;

		for (n = 0; n < size; n++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
