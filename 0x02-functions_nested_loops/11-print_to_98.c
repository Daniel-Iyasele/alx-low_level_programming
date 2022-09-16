#include "main.h"
/**
 * print_to_98 - fuctions that prints from the number to 98 orderly
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	int default_value, i;

	default_value = 98;
	if (n > default_value)
	{
		for (i = n; i >= default_value; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	if (n < default_value)
	{
		for (i = n; i <= default_value; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	if (n == default_value)
	{
		printf("%d\n", n);
	}
}
