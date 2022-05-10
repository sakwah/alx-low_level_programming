#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fress memory allocated to struct dogs
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
