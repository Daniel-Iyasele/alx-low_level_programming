#include "variadic_functions.h"
/**
 * print_numbers - prints values in a variadic function
 * @separator: string that separates printed values
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ptr, int));
		else if (separator && (i == 0))
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}
	printf("\n");
	va_end(ptr);
}
