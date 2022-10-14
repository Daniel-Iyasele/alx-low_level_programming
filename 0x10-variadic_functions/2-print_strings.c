#include "variadic_functions.h"
/**
 * print_strings - output strings variable using varaidic function
 * @separator: string to separate parameters
 * @n: number of string parameter passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr; /* pointer to immediate parameter after n*/
	char *str;

	va_start(ptr, n); /* macro invocation*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (!(str))
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ptr);
}
