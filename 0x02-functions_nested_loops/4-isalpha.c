#include "main.h"
/**
 * _isalpha - checks if a given inputt is an alphabet
 * @c: character to be checked
 *
 * Return: 1 if c is an alphabet otherwise 0
 */
int _isalpha(int c)
{
	int ret;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		ret = 1;
	}
	else
		ret = 0;
	return (ret);
}
