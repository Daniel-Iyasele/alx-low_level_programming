#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this frees struct dog
 * @d: pointer to struct dog
 *
 * Ruturn: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
