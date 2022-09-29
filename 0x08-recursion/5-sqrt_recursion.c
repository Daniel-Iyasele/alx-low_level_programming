#include "main.h"
/**
 * _sqrt_recursion - finds the natural square-root of a number.
 * @n: number to find its square root
 *
 * Return: n if square root exists
 * else returns -1;
 */
int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
	{
		return (n / _sqrt_recursion(n / 2));
	}
	else if (n % 3 == 0)
	{
		return (n / _sqrt_recursion(n / 3));
	}
	else if (n % 5 == 0)
	{
		return (n / _sqrt_recursion(n / 5));
	}
	else if (n % 7 == 0)
	{
		return (n / _sqrt_recursion(n / 7));
	}
	else if (n % 11 == 0)
	{
		return (n / _sqrt_recursion(n / 11));
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (-1);
}
