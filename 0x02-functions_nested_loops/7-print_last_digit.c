#include "main.h"
/**
 * print_last_digit - prints the last digit of any number
 * @n: checks the number
 *
 * Return: 0 as success
 */
int print_last_digit(int n)
{
	int ret;

	if (n < 0)
	{
		n = -1 * n;
	}
	ret = n % 10;
	return (ret);
}
