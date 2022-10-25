#ifndef DOG_H
#define DOG_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - basic info on a dog
 * @name: string with dog's name
 * @age: float with dog's age
 * @owner: string with dog owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif
