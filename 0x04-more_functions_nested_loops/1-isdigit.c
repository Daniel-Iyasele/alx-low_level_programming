#include "main.h"
/**
 * _isdigit - function checks if an input is a digit or not
 * @c: input to be checked
 *
 * Return: 1 if input is a digit otherwise 0
 */
int _isdigit(int c)
{
	int ret;

	if (c >= '0' && c <= '9')
	{
		ret = 1;
	}
	else
		ret = 0;
	return (ret);
}
