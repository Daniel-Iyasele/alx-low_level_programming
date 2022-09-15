#include "main.h"
/**
 * _isupper - function that checks if a character is an uppercase
 * @c: character to be checked
 *
 * Return: 1 if c is an uppercase otherwise 0
 */
int _isupper(int c)
{
	int ret;

	if (c >= 'A' && c <= 'Z')
	{
		ret = 1;
	}
	else
		ret = 0;
	return (ret);
}
