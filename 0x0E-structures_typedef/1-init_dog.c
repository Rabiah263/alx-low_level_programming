#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog to initialize.
 * @name: the dog name.
 * @age: the age of the age.
 * @owner: the name of the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
