#include "function_pointers.h"
/**
 * print_name - prints the name passed tto function
 * @name: name to be printed
 * @f: pointer o function variable
 *
 * Return: nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
