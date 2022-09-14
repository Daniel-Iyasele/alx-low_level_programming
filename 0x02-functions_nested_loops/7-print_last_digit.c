#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of any number
 * @n: checks the number
 *
 * Return: ret as success
 */
int print_last_digit(int n)
{
	int ret;

	ret = n % 10;
	if (ret < 0)
		ret = -1 * ret;
	 /*ret = n % 10;*/
	_putchar('0' + ret);
	return (ret);
}
