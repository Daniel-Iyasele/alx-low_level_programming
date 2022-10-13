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
	for (int i = 0; *(name + i) != '\0'; i++)
	{
	}
	(*f)(name);
}
