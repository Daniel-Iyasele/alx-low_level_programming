#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - funcion to print dog structure variables
 * @d: pointer to struct variables.
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == null)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
