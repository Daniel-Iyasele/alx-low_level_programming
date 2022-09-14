#include "main.h"
/**
 * _islower - checks if an input is a lowercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is a lowercase otherwise 0
 */
int _islower(int c)
{
	int ret;
	int charac = c;
	int alpha = 'a', last_alpha = 'z';

	while (alpha <= last_alpha)
	{
		if (charac == alpha)
		{
			ret = 1;
		}
		else if (charac != alpha)
		{
			ret = 0;
		}
		alpha++;
	}
	return (ret);
}
