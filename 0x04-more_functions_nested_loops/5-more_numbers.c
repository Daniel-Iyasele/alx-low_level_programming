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
				/* conversion of int greater than 9 in AScii to char */
				int last, first;

				last = j % 10;
				first = j / 10;
				first = first + '0';
				last = last + '0';
				_putchar(first);
				_putchar(last);
			}
			else
			{
				int new;

				new = j + '0';
				_putchar(new);
			}
			j++;
		}
		_printer('\n');
		i++;
	}
}
