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
	/*Data*/
	char *name;
	float age;
	char *owner;
};

/*typedef for struct dog*/
typedef struct dog dog_t;

/*Function Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
