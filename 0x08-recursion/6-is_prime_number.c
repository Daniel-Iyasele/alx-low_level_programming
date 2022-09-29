#include "main.h"
int check_prime(int n, int i);
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

	return (check_prime(n, n - 1));
}
/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
