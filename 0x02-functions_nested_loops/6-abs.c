#include "main.h"
/**
 * _abs - gets the absolute value of any integer value
 * @a: value whose absolute value has to be gottten
 *
 * Return: a the absolutte result
 */
int _abs(int a)
{
	int ret;

	ret = -1 * a;
	if (ret < 0)
		ret = -1 * ret;
	return (ret);
}
