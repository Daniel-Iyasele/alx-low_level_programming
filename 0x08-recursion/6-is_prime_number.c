#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)

		return (0);

	return (actual_prime(n, n - 1));
}
