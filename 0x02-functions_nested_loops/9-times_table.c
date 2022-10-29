#include "main.h"
/**
 * times_table - function that prints multiplication table 9
 * Author daniel Iyasele
 */
void times_table(void)
{
	int i, j, mult, first, last;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (mult > 9)
			{
				first = (mult / 10) + '0';
				last = (mult % 10) + '0';
				if (j == 0)
				{
					_putchar(first);
					_putchar(last);
					_putchar(',');
				}
				else if (j > 0)
				{
					_putchar(' ');
					_putchar(first);
					_putchar(last);
					if (j < 9)
						_putchar(',');
				}
			}
			else
			{
				mult = mult + '0';
				if (j == 0)
				{
					_putchar(mult);
					_putchar(',');
				}
				else if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mult);
					if (j < 9)
						_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
