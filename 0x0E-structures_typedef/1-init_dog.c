#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)/*validate if d initialized correctly*/
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
