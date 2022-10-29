#include "main.h"
/**
 * times_table - function that prints multiplication table 9
 * Author daniel Iyasele
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (mult > 9)
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (j < 9)
					_putchar(',');
			}
			else
			{
				if (j == 0)
				{
					_putchar((mult + '0'));
					_putchar(',');
				}
				else if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult + '0'));
					if (j < 9)
						_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
