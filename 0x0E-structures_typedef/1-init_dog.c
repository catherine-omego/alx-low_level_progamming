#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog struct
 *
 * @d: the dog struct
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: The owner of the dog
 *
 * Return: Null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = ownee;
	}
}
