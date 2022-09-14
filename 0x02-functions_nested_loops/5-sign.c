#include "main.h"
/**
 * print_sign - checks if a number is positive or negative
 * @n: number to be checked
 *
 * Return: 1 if number is greater than zero otherwise 0
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
