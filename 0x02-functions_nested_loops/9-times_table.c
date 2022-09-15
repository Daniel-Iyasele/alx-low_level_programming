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
			printf("%d", mult);
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
