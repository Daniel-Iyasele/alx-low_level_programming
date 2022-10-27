#include "main.h"
/**
 * binary_to_uint - converts binary inputs to unsigned integer
 * @b: binary input
 *
 * Return: converted value (base_ten) to main
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, j = 0;
	unsigned int bin_to_int = 0;
	unsigned int base = 2;

	if (!check_string(b))
		return (0);
	while (*(b + len) != '\0')
		len++;
	while (len)
	{
		bin_to_int += ((b[len - 1] - '0') * power(base, j));
		len--;
		j++;
	}
	return (bin_to_int);
}
/**
 * power - this computes the power of a number
 * @a: base number
 * @b: index
 * Return: power of a number
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int pow = 1, i;

	if (b == 0)
		return (pow);
	for (i = 0; i < b; i++)
		pow = pow * a;
	return (pow);
}
/**
 * check_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
