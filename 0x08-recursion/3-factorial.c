#include "main.h"
/**
 * factorial - gets the factorial of any number
 * @n: integer value to be calculated
 *
 * Return: -1 if n lower than 0;
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
