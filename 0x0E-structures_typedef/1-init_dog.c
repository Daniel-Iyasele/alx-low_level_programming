#include "dog.h"
/**
 * init_dog - funcion tto iniialize dog variables
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: dog age
 * @owner:dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
