#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - itialize a variable of type
 *
 * @d: pointer to struct for a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d!=NULL)
	{
		d->name = name;
		d->age= age;
		d->owner= owner;
	}
}
