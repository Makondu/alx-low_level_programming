#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise a variable
 * @d: initialises a variable
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Struct for dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}
