#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to struct dog;
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d.name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d.age != NULL)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d.owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
