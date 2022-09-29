#include "main.h"
/**
 * _strlen_recursion - gets the length of a string recursivel
 * @s: string whose lenghth needs to be gotten
 *
 * Return: an integer value equivalent to string length.
 */
int _strlen_recursion(char *s)
{
	if (*s !=  '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
