#include "main.h"
/**
 * more_numbers - function prints 0-14 ten times
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
