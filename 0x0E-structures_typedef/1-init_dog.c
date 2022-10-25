#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize struct dog
 * @d: pointer to struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
