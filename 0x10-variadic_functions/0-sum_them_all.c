#include "variadic_functions.h"
/**
 * sum_them_all - variadic function to sum its parameter
 * @n: first arg to the function
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);
	for (i =  0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
