#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * @dog_t *d: pointer to struct
 * 
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
