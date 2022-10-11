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
	if (d->name == NULL || d->owner == NULL)
		printf("nil\n");
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
